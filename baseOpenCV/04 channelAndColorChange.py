# -*-coding: utf-8 -*-
# @Time    : 2023/4/9 16:36
# @Author  : 刘少博
# @File    : 04 channelAndColorChange.py

import numpy as np
import cv2 as cv
import matplotlib.pyplot as plt

# 通道拆分、通道合并
# 图像类型转换：RGB-》gray、RGB-》HSV

img = cv.imread("pic/1.jpg", 1)  # 1: 彩色图像

plt.imshow(img[:, :, ::-1])
plt.show()

# 通道拆分
b, g, r = cv.split(img)  # cv为BGR数据，拆分为3个通道
plt.imshow(b)
plt.show()  # b通道图像展示
plt.imshow(g)
plt.show()  # b通道图像展示
plt.imshow(r)
plt.show()  # b通道图像展示

# 通道合并
img2 = cv.merge((r, g, b))  # 拼接为RGB图像
plt.imshow(img2)
plt.show()

# RGB -> Gray
imgGray = cv.cvtColor(img, cv.COLOR_BGR2GRAY)  # 参数1 BGR图像 参数2：转换类型
plt.imshow(imgGray, cmap=plt.cm.gray)  # 显示灰度图像,加cmap=plt.cm.gray
plt.show()

# RGB -> HSV
imgHSV = cv.cvtColor(img, cv.COLOR_BGR2HSV)  # 参数1 BGR图像 参数2：转换类型
plt.imshow(imgHSV)  # 显示HSV图像
plt.show()
