# -*-coding: utf-8 -*-
# @Time    : 2023/4/9 16:36
# @Author  : 刘少博
# @File    : 03 singlePixelOperation.py

import numpy as np
import cv2 as cv
import matplotlib.pyplot as plt

# 像素操作

# 创建图像
img = np.zeros((256, 256, 3), np.uint8)

plt.imshow(img[:, :, ::-1])
plt.show()

# 获取像素值（横坐标、纵坐标、通道）
px = img[100, 100]  # [0,0,0]
print(px)

px = img[100, 100, 0]  # 0

# 修改像素点
img[100, 100] = [0, 0, 255]
img[100, 101] = [0, 0, 255]  # Blue
plt.imshow(img[:, :, ::-1])  # ::-1 通道翻转-> Red
plt.show()

# 图像shape
print(img.shape)  # 不是函数，不加()，是属性

# 图像数据类型
print(img.dtype)  # 不是函数，不加()，是属性

# 图像像素个数
print(img.size)  # 不是函数，不加()，是属性
