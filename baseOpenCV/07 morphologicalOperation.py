# -*-coding: utf-8 -*-
# @Time    : 2023/4/9 16:36
# @Author  : 刘少博
# @File    : 07 morphologicalOperation.py

import numpy as np
import cv2 as cv
import matplotlib.pyplot as plt
from matplotlib.font_manager import FontProperties

# 形态学操作: 腐蚀膨胀、开闭运算、礼帽黑帽

# 腐蚀与膨胀: 创建核结构 + 腐蚀膨胀
img = cv.imread("pic/0.jpg")
plt.imshow(img[:, :, ::-1])
plt.show()

# 创建核结构
kernel = np.ones((5, 5), np.uint8)

# 腐蚀: 使高亮区域变小，去掉噪声
img_f = cv.erode(img, kernel, 1)  # 参数1 要腐蚀的图像 参数2 核结构 参数3 腐蚀次数
plt.imshow(img_f[:, :, ::-1])
plt.show()

# 膨胀：使高亮区域变大，填充孔洞
img_p = cv.dilate(img, kernel, 1)  # 参数1 要膨胀的图像 参数2 核结构 参数3 膨胀次数
plt.imshow(img_p[:, :, ::-1])
plt.show()

kernel1 = np.ones((10, 10), np.uint8)
img_friends = cv.imread("pic/friends.png")
my_font = FontProperties(fname=r"c:\windows\fonts\SimHei.ttf", size=12)

# 开运算：先腐蚀后膨胀，分离物体，去除噪声
friends_open = cv.morphologyEx(img_friends, cv.MORPH_OPEN, kernel1)  # 参数1 开运算要操作的图像 参数2 模式选择 参数3 核结构
# 闭运算：先膨胀后腐蚀，消除孔洞，填充闭合区域
friends_close = cv.morphologyEx(img_friends, cv.MORPH_CLOSE, kernel1)

# 图像展示
fig, axes = plt.subplots(nrows=2, ncols=2, figsize=(10, 8))
axes[0, 0].imshow(img_friends[:, :, ::-1])
axes[0, 0].set_title("原图", fontproperties=my_font)
axes[0, 1].imshow(friends_open[:, :, ::-1])
axes[0, 1].set_title("开运算结果", fontproperties=my_font)
axes[1, 0].imshow(img_friends[:, :, ::-1])
axes[1, 0].set_title("原图", fontproperties=my_font)
axes[1, 1].imshow(friends_close[:, :, ::-1])
axes[1, 1].set_title("闭运算结果", fontproperties=my_font)
plt.show()

# 礼帽：原图像与开运算的结果图之差 开运算放大了裂缝和局部低亮区域 礼帽运算用来分离比邻近点亮一些的斑块
friends_top = cv.morphologyEx(img_friends, cv.MORPH_TOPHAT, kernel1)  # 参数1 分离亮点的图像 参数2 礼帽运算 参数3 核结构
# 黑帽：闭运算的结果图与原图像之差 用来分离比临近点暗一些的区域
friends_black = cv.morphologyEx(img_friends, cv.MORPH_BLACKHAT, kernel1)

# 图像展示
fig, axes = plt.subplots(nrows=2, ncols=2, figsize=(10, 8))
axes[0, 0].imshow(img_friends[:, :, ::-1])
axes[0, 0].set_title("原图", fontproperties=my_font)
axes[0, 1].imshow(friends_top[:, :, ::-1])
axes[0, 1].set_title("礼帽结果", fontproperties=my_font)
axes[1, 0].imshow(img_friends[:, :, ::-1])
axes[1, 0].set_title("原图", fontproperties=my_font)
axes[1, 1].imshow(friends_black[:, :, ::-1])
axes[1, 1].set_title("黑帽结果", fontproperties=my_font)
plt.show()
