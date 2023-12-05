# -*-coding: utf-8 -*-
# @Time    : 2023/4/15 17:08
# @Author  : 刘少博
# @File    : 08 imageSmoothing.py

import numpy as np
import cv2 as cv
import matplotlib.pyplot as plt
from matplotlib.font_manager import FontProperties

my_font = FontProperties(fname=r"c:\windows\fonts\SimHei.ttf", size=12)

image = cv.imread("pic/0.jpg")
plt.imshow(image[:, :, ::-1])
plt.show()
# 生成椒盐噪声图片
# 设置添加椒盐噪声的数目比例
s_vs_p = 0.5
# 设置添加噪声图像像素的数目
amount = 0.04
noisy_img = np.copy(image)
# 添加salt噪声
num_salt = np.ceil(amount * image.size * s_vs_p)
# 设置添加噪声的坐标位置
coords = [np.random.randint(0, i - 1, int(num_salt)) for i in image.shape]
noisy_img[coords[0], coords[1], :] = [255, 255, 255]
# 添加pepper噪声
num_pepper = np.ceil(amount * image.size * (1. - s_vs_p))
# 设置添加噪声的坐标位置
coords = [np.random.randint(0, i - 1, int(num_pepper)) for i in image.shape]
noisy_img[coords[0], coords[1], :] = [0, 0, 0]
cv.imwrite("noisy_img.png", noisy_img)

# 显示噪声图像
plt.imshow(noisy_img[:, :, ::-1])
plt.show()

# 均值滤波
dog_jz = cv.blur(noisy_img, (5, 5))  # 参数1 滤波的图像 参数2 卷积核大小
plt.imshow(dog_jz[:, :, ::-1])
# 为什么不显示呢？
plt.show()

# 高斯滤波
dog_gs = cv.GaussianBlur(noisy_img, (3, 3), 1)  # 参数1 噪声图像 参数2 高斯核大小 参数3 x方向的sigma大小，y方向的默认与x相同
plt.imshow(dog_gs[:, :, ::-1])
plt.show()

# 中值滤波 对椒盐噪声非常有效
dog_zh = cv.medianBlur(noisy_img, 3)  # 参数1 噪声图像 参数2 中值核边长
plt.imshow(dog_zh[:, :, ::-1])
plt.show()
