# while循环
'''
1. while循环：注意不要死循环（条件需要动态变化）
2. num += 1；num = num + 1。两种方式id都会改变
3. 2种方式的死循环；①有IO操作的死循环，会给CPU休息时间，对效率影响不大；②纯计算死循环，CPU不断高速运行，不停歇，极其影响效率，甚至烧毁CPU
'''
import six

# 1 2
num = 0
while num<10:
    print(num)
    num += 1 # num = num + 1。两种方式id都会改变
print('循环结束了。')

# 3 ①
while 1:
    print('你好')

while 2:
    input('冯攀峰：')
    print('刘少博')

# 3 ②
while 3:
    10+10