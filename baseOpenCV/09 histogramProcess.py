# -*-coding: utf-8 -*-
# @Time    : 2023/4/27 20:13
# @Author  : 刘少博
# @File    : 09 histogramProcess.py

import numpy as np
import cv2 as cv
import matplotlib.pyplot as plt

img = cv.imread("./pic/0.jpg", 0)  # 以灰度形式读入图像
plt.imshow(img, cmap=plt.cm.gray)  # 以灰度图的形式显示
plt.show()

hist = cv.calcHist([img], [0], None, [256], [0, 256])  # 参数1：图像 参数2：通道 参数3：Mask 参数4：bins个数 参数5：图像的灰度范围

plt.figure(figsize=(10, 8))
plt.plot(hist)
plt.show()

mask = np.zeros(img.shape[:2], np.uint8)  # 掩膜设置
mask[200:400, 600:800] = 1
plt.imshow(mask, cmap=plt.cm.gray)
plt.show()

mask_img = cv.bitwise_and(img, img, mask=mask)  # cv与操作
plt.imshow(mask_img, cmap=plt.cm.gray)
plt.show()

mask_hist = cv.calcHist([img], [0], mask, [256], [0, 256])  # 添加掩膜后的图像直方图
plt.figure(figsize=(10, 8))
plt.plot(mask_hist)
plt.show()

dst = cv.equalizeHist(img)  # 直方图均衡化
plt.imshow(dst, cmap=plt.cm.gray)
plt.show()

cl = cv.createCLAHE(2.0, (16, 16))  # 自适应均衡化设置
clahe = cl.apply(img)  # 应用到图像
plt.imshow(clahe, cmap=plt.cm.gray)
plt.show()
