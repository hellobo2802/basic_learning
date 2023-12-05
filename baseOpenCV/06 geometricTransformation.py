# -*-coding: utf-8 -*-
# @Time    : 2023/4/9 16:36
# @Author  : 刘少博
# @File    : 06 geometricTransformation.py

import numpy as np
import cv2 as cv
import matplotlib.pyplot as plt

# 几何变换

# 变大变小：绝对尺寸、相对尺寸

img = cv.imread("pic/0.jpg")
plt.imshow(img[:, :, ::-1])
plt.show()

row, col = img.shape[:2]
print(row)
print(col)

# 绝对坐标放大
res1 = cv.resize(img, (2 * col, 2 * row))
plt.imshow(res1[:, :, ::-1])
plt.show()

# 相对坐标放小
res2 = cv.resize(img, None, fx=0.5, fy=0.5)
plt.imshow(res2[:, :, ::-1])
plt.show()

# 图像平移：cv.warpAffine
# 创建M矩阵
M = np.float32([[1, 0, 100], [0, 1, 40]])
"""
# [1 0 100] x方向移动100。1 0常这样设置
# [0 1 40] y方向移动40。0 1常这样设置
"""
img2 = cv.warpAffine(img, M, (2 * col, 2 * row))  # 参数1 要平移的图像 参数2 平移矩阵 参数3 平移后的图像大小（宽度,高度）
plt.imshow(img2[:, :, ::-1])
plt.show()

# 图像旋转：首先获取旋转矩阵，再旋转
N = cv.getRotationMatrix2D((col / 2, row / 2), 45, 1)  # 参数1 旋转中心 参数2 旋转角度 参数3 缩放比例
img3 = cv.warpAffine(img, N, (2 * col, 2 * row))
plt.imshow(img3[:, :, ::-1])
plt.show()

# 仿射变换：首先获取仿射矩阵，再变换
# 根据三个点求仿射变换矩阵
pts1 = np.float32([[10, 20], [40, 30], [50, 60]])  # 变换前三点位置
pts2 = np.float32([[10, 10], [20, 20], [20, 10]])  # 变换后三点位置
X = cv.getAffineTransform(pts1, pts2)
img4 = cv.warpAffine(img, X, (2 * col, 2 * row))
plt.imshow(img4[:, :, ::-1])
plt.show()

# 投射变换：先获取投射矩阵，再变换
# 根据四个点求投射变换矩阵
pts3 = np.float32([[10, 20], [40, 30], [50, 60], [20, 10]])  # 变换前四点位置
pts4 = np.float32([[10, 20], [20, 10], [20, 10], [10, 20]])  # 变换后四点位置
Y = cv.getPerspectiveTransform(pts3, pts4)
img5 = cv.warpPerspective(img, Y, (2 * col, 2 * row))
plt.imshow(img5[:, :, ::-1])
plt.show()

# 图像金字塔：cv.pyrUp: 上采样；cv.pyrDown: 下采样
img_up = cv.pyrUp(img)  # 上采样
img_down = cv.pyrDown(img)  # 下采样

cv.imshow("enlarge", img_up)
cv.imshow("original", img)
cv.imshow("shrink", img_down)
cv.waitKey(0)
cv.destroyAllWindows()
