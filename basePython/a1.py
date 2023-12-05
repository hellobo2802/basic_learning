import numpy as np
'''
a = np.array([[1,6],[2,3]])
print(a)
print(a.shape)
print('axis=0',np.sum(a,axis=0))
print('axis=1',np.sum(a,axis=1))

b = np.array([1,2,3])
print(b.shape)
print('axis=0',np.sum(b,axis=0))
a = np.array([3,2,4,7,9,0,1,0])  # 3,2, 4,5,6,0,1
idx = np.argsort(a)[:2]
print(idx)
a = np.array([[1,2],[3,4]])
b = np.array([[1,2],[3,4]])
print(a)
print(b)
print(a.dot(b))
a = np.array([[1,2],[3,4]])
print(a)
b = np.array([[0,1],[1,0]])
print(b)
print(a*b)
print(np.dot(a,b))
W1 = np.random.normal(0,1,(4,2))
print(W1)
print(W1.shape)
b1 = np.zeros(2)
print(b1)
print(b1.shape)
b = [50, 80, 100]
a = b[np.random.randint(0,len(b))]
print(a)
for i in range(1):
    print(1)
import scipy
print(scipy.__version__)

help()
import scipy
print(scipy.__version__)
a = np.array([
              [[1,2],
               [2,4],
               [4,5]],
               [[1,2],
               [2,4],
               [4,5]],
            ])
print(a.shape)

print(a[:,0,:])
a = 1
b = 2
print(a,b)
a,b = b,a # 不会变为2 2 ！！！锁定同时赋值，绝了！
print(a,b)
str1 = 'asasAAA你喊'
print(str1.capitalize())'''
while 1:
    input_num = input('猜个数吧：').strip() # strip()去除两端的空格
    if input_num.isdigit(): # 判断输入字符是不是纯数字
        num = int(input_num) # 字符串转为int
    else:
        print('捣蛋鬼，请输入纯数字！')
        continue
    if num > 1314:
        print('偏大了！')
    elif num < 1314:
        print('偏小了！')
    else:
        print('猜对了！')
        break