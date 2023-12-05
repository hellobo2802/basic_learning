# -*-coding: utf-8 -*-
# @Time    : 2023/4/9 16:36
# @Author  : 刘少博
# @File    : 02 drawShape.py

import numpy as np
import cv2 as cv
import matplotlib.pyplot as plt

# 在图像上画各种形状

# 创建图像
img = np.zeros((512, 512, 3), np.uint8)
# img = cv.imread('pic/1.jpg')
# 绘制直线
cv.line(img, (0, 0), (511, 511), (255, 0, 0), 5)  # cv2中的颜色为BGR,即（B，G，R）

# 绘制圆形
cv.circle(img, (256, 256), 60, (0, 0, 255), -1)  # -1表示全部填充为前面的颜色

# 绘制方形：需要左上角，右下角坐标
cv.rectangle(img, (100, 100), (400, 400), (0, 255, 0), 5)

# 写字
cv.putText(img, "hello", (100, 100), cv.FONT_HERSHEY_COMPLEX, 1, (255, 255, 255), 3)
# 显示图像
plt.imshow(img[:, :, ::-1])  # 转为RGB显示
plt.show()
