# 逻辑运算符
'''
1. 逻辑运算符：与and;或or;非not
2. 混用的优先级：not > and > or。'()'可以改变优先级
3. 成员运算符：in；not in。字典中只能通过key值查看是否存在
4. if判断（流程控制）：条件成立，执行子代码块（缩进4个空格）；条件不成立，跳过子代码块
5. if-elif-else：只会执行一个代码块，满足即执行，然后跳出。 
'''
by = 'human'
gender = 'male'
age = 21

# 1 与and 运算符: 所有条件必须都满足；从第一个条件往后依次判断，有一个不满足，直接False（偷懒原则）！
print(by == 'human' and gender == 'male' and 18<age<25)

# 1 或or 运算符：只要有一个条件成立，就成立
# 从第一个条件往后依次判断，有一个满足，直接True（偷懒原则）！
print(by == 'Human' or gender == 'fmale' or 18<age<25)

# 1 非not运算符：取反 
print(not True) # False
print(not 1) # False
print(not '') # True

# 2 混用优先级 not > and > or
print(84 != 73 and not 22 > 22 or 31 == 27 and '刘少博' == '冯攀峰' or 18 > 20)

# 3 in 字典中只能通过key值查看是否存在
print('刘少博' in '刘少博是个天才！') # True # 判断短字符串是否在长字符串中
l = [1,2,3]
print(1 in l, 4 in l) # 判断列表中元素是否存在
l2 = {'w':1,'q':2}
print('w' in l2, 1 in l2) # 字典中只能通过key值查看是否存在

# 3 not in
print('冯攀峰' not in '刘少博是个天才！') # True
print(not '冯攀峰' in '刘少博是个天才！') # True 先判断in 再判断not

# 4 条件成立，执行；条件不成立，跳过子代码块
name = input('你的名字：')
age = int(input('你的年龄：')) # input输入的信息都为string
if name=='冯攀峰' and 18<age<30:
    print('我喜欢你')
else:
    print('不可以')

# 5 elif 只会执行其中一个
grade = 93
if grade >= 95:
    print('A+')
elif grade >= 90:
    print('A')
elif grade >=85:
    print('B+')
else:
    print('No!')
