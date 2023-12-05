# -*-coding: utf-8 -*-
# @Time    : 2023/4/27 21:33
# @Author  : 刘少博
# @File    : 10 edgeDetection.py

import numpy as np
import cv2 as cv
import matplotlib.pyplot as plt

img = cv.imread("./pic/0.jpg", 0)  # 灰度图读取
plt.imshow(img, plt.cm.gray)
plt.show()

# Sobel
x = cv.Sobel(img, cv.CV_16S, 1, 0)  # 参数1：图像 参数2：数据操作超过8位，使用16位存储 参数3：操作x方向 参数4：不操作y方向
y = cv.Sobel(img, cv.CV_16S, 0, 1)  # 参数1：图像 参数2：数据操作超过8位，使用16位存储 参数3：不操作x方向 参数4：操作y方向
abx = cv.convertScaleAbs(x)
aby = cv.convertScaleAbs(y)
res = cv.addWeighted(abx, 0.5, aby, 0.5, 0)
plt.imshow(res, plt.cm.gray)
plt.show()
# Schaar
x = cv.Sobel(img, cv.CV_16S, 1, 0, ksize=-1)  # 参数1：图像 参数2：数据操作超过8位，使用16位存储 参数3：操作x方向 参数4：不操作y方向 参数5：转为Schaar
y = cv.Sobel(img, cv.CV_16S, 0, 1, ksize=-1)  # 参数1：图像 参数2：数据操作超过8位，使用16位存储 参数3：不操作x方向 参数4：操作y方向 参数5：转为Schaar
abx = cv.convertScaleAbs(x)
aby = cv.convertScaleAbs(y)
res = cv.addWeighted(abx, 0.5, aby, 0.5, 0)
plt.imshow(res, plt.cm.gray)
plt.show()

# Laplacian
xy = cv.Laplacian(img, cv.CV_16S)
res = cv.convertScaleAbs(xy)
plt.imshow(res, plt.cm.gray)
plt.show()

# Canny
res = cv.Canny(img, 0, 100)  # 参数1 图像 参数2 最小阈值 参数3 最大阈值
plt.imshow(res, plt.cm.gray)
plt.show()
