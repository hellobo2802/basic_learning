# -*-coding: utf-8 -*-
# @Time    : 2023/4/9 16:36
# @Author  : 刘少博
# @File    : 05 basicImageOperation.py

import numpy as np
import cv2 as cv
import matplotlib.pyplot as plt

# 图像的加法：cv.add、numpy叠加（减法、除法、乘法类似），要求图像shape一样
# 图像混合：将图像按照权重相加

fpf = cv.imread("pic/1.jpg")
lsb = cv.imread("pic/2.jpg")

plt.imshow(fpf[:, :, ::-1])
plt.show()

plt.imshow(lsb[:, :, ::-1])
plt.show()

# cv.add
img1 = cv.add(fpf, lsb)  # 相加后，数值操作为饱和操作，效果更好

plt.imshow(img1[:, :, ::-1])
plt.show()
# numpy 相加
img2 = fpf + lsb  # 相加后，数值操作为取模操作。260%255=5
plt.imshow(img2[:, :, ::-1])
plt.show()

img3 = fpf - lsb
plt.imshow(img3[:, :, ::-1])
plt.show()

# 图像混合: addWeighted()
# gx = a1 * image1 + a2 * image2 + b

for i in [0.1, 0.2, 0.3, 0.4, 0.5, 0.6, 0.7, 0.8, 0.9]:
    img4 = cv.addWeighted(fpf, i, lsb, 1 - i, 0.1)
    plt.imshow(img4[:, :, ::-1])
    plt.show()
