# -*-coding: utf-8 -*-
# @Time    : 2023/4/9 16:36
# @Author  : 刘少博
# @File    : 01 ioOperation.py

import numpy as np
import cv2 as cv
import matplotlib.pyplot as plt

# 读取图像
# 参数1 图像位置
# 参数2 1/color: 以彩色模式加载图像，忽略透明度；0/grayscale：以灰度模式加载图像；-1/unchanged：包含alpha通道，即包含透明度的彩色图像
img = cv.imread('pic/1.jpg', 0)  # 第二个参数默认彩色图

# 显示图像
# 参数1 显示图像的窗口名称，字符串形式
# 参数2 要加载的图像（已经读取到内存中）
cv.imshow('image', img)
cv.waitKey(0)  # 给图像留下绘制时间。waitKey(0)：永远等待
# plt.imshow(img[:,:,::-1])

# 保存图像
# 参数1 要保存的位置
# 参数2 要保存的图像
cv.imwrite('pic/gray1.jpg', img)
