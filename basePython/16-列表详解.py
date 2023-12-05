# 列表详解
'''
1. 列表制造：list()函数。将()内的内容化为列表类型。
   list()同样可以将()内的可迭代对象转为列表，例如：字符串和字典。联想for循环取值，依次将字符串的每个值取出，变为列表；将字典的key值取出，变为列表。
2. 取值与改值：列表可以按照索引取值与改值。取值或改值时索引必须存在。
3. 追加append(): 在列表末尾添加()内的值
4. 插入insert(): 在列表的指定位置插入值。e.g. l.insert(0,'a'): 在l列表的0号索引位置插入'a',后面元素依次往后挪
   当索引值大于索引总长度时，将插入元素放在最后；索引为负，按照从后往前放置
5. 扩展extend(): ()内放置可迭代对象，将其每个值就看作元素扩展在原列表后面
   列表为可修改类型，无返回值，直接在原列表上修改！！！
6. 列表相加：list1+list2。两个列表相加，与extend()效果一样，不过会新产生内存空间(id不一样)
7. 删除列表元素
   del: 按照列表索引删除元素，无返回值。e.g. del l[1]：删除列表l的1号元素
   pop: 按照列表索引弹出元素，有返回值，即弹出的该元素。e.g. l.pop()：默认弹出列表的最后一个元素
   remove: 按照列表的元素值删除元素。e.g. l.remove('aaa')：删除aaa元素
   clear: 清空列表元素
8. 切片：同样顾头不顾尾；可以有步长和反向步长.直接复制符合条件的元素，不改原列表，复值为浅拷贝!
9. len()统计长度
10. 成员运算： in/not in
11. 循环运算：for i in l。循环运算里面不要修改列表！
12. 计算输入元素个数：count('a'): 
13. 查看元素索引: index(): 从左往右，找到第一个元素对应的索引，返回该值
14. reverse(): 反转！！跟[::-1]效果一样，但是不会改变ID，直接在原列表上修改
15. 排序sort(): 默认为从小到大(reverse=False)，通过关键字参数调整排序方式。reverse=True，逆序。
    sort()时要求列表的元素为同一种类型
16. list模拟队列和堆栈的操作。队列：先进先出；堆栈：先进后出
'''
# 1 类型为<list>
list1 = list(['asa','asa','sasqsq'])
print(list1,type(list1))

# list()将可迭代参数转为列表
list1_1 = list('刘少博和冯攀峰')
print(list1_1,type(list1_1)) # ['刘', '少', '博', '和', '冯', '攀', '峰'] <class 'list'>

list1_2 = list({'刘少博':'lsb','冯攀峰':'fpf'})
print(list1_2,type(list1_2)) # '刘少博', '冯攀峰'] <class 'list'>

# 2
list2 = ['a','b','c']
print(list2[0]) # a 按照索引取值
list2[0] = 'A'
print(list2[0]) # A 按照索引改值

# 3 append()追加值
list3 = ['刘少博','冯攀峰']
list3.append('lsb')
print(list3) # ['刘少博', '冯攀峰', 'lsb']

# 4 insert()插入
list4 = ['刘少博','冯攀峰']
list4.insert(1,'love') # ['刘少博', 'love', '冯攀峰']
list4.insert(9,'！') # 当索引值大于索引总长度时，将插入元素放在最后；索引为负，按照从后往前放置
print(list4)

# 5 尝试使用append()扩展元素时，会将整个列表作为下一个元素！
list5 = ['刘少博','冯攀峰']
list5_1 = ['lsb','fpf']
list5.append(list5_1) 
print(list5) # ['刘少博', '冯攀峰', ['lsb', 'fpf']]

# 5 extend() 扩展可迭代对象
list5 = ['刘少博','冯攀峰']
str1 = '5201314'
list5.extend(str1) # 直接在原可变类型上修改，无返回值
print(list5) # ['刘少博', '冯攀峰', '5', '2', '0', '1', '3', '1', '4']

list5 = ['刘少博','冯攀峰']
list5_1 = ['lsb','fpf']
list5.extend(list5_1)
print(list5) # ['刘少博', '冯攀峰', 'lsb', 'fpf']

list5 = ['刘少博','冯攀峰']
dist1 = {1:'aaa',2:'bbb'}
list5.extend(dist1) # extend()字典时扩展的是字典的key值
print(list5) # '刘少博', '冯攀峰', 1, 2]

# 6 列表相加: +只作用于的列表之间，且结果会新开辟内存空间。
list6_1 = ['lsb']
list6_2 = ['fpf']
print(list6_2 + list6_1)
print(id(list6_1), id(list6_2 + list6_1))

list6_1.extend(list6_2)
print(id(list6_1))

# 7 del 按照列表索引删除元素，无返回值
list7 = [1,2,3,4]
del list7[0]
print(list7) # [2, 3, 4]

# 7 pop 按照列表索引弹出元素，默认最后一个优先弹出
list7 = ['a','b','c','d']
r1 = list7.pop() # 默认弹出最有一个元素
print(r1,list7) # d ['a', 'b', 'c']
r2 = list7.pop(0)
print(r2,list7) # a ['b', 'c']

# 7  remove 按照列表值移除元素，无返回值
list7 = ['a','b','c','d']
list7.remove('c')
print(list7) # ['a', 'b', 'd']

# 7 clear 清空列表
list7 = ['a','b','c','d']
list7.clear()
print(list7) # []

# 8 切片 同样顾头不顾尾；可以有步长和反向步长
list8 = ['a','b','c','d']
print(list8[::2]) # ['a', 'c']

# 9 len()统计长度
list9 = ['a','b','c','d']
print(len(list9)) # 4

# 10 成员运算： in/not in
list10 = ['a','b','c','d']
print('a' in list10) # True

# 11 循环运算
list11 = ['a','b','c','d']
for i in list11:
    print(i,end=' ') # a b c d

# 12 计算输入元素个数
list12 = ['a','b','c','d','a']
print(list12.count('a')) # 2

# 13 查看元素索引
list13 = ['a','b','c','d','a']
print(list13.index('a')) # 找到第一个索引就返回

# 14 reverse() 反转列表，与[::-1]效果一样，不过reverse()直接在原列表上修改
list14 = ['a','b','c','d']
print(id(list14)) # 2131963857344
list14.reverse() # 反转列表元素
print(list14,id(list14)) # reverse()直接操作于原列表，Id不变。['d', 'c', 'b', 'a'] 2131963857344
list14 = ['a','b','c','d']
print(list14[::-1],id(list14[::-1]),id(list14))['d', 'c', 'b', 'a'] # 切片产生新列表：2131963857152 2131961006080

# 15 排序
list15= [23,14,6,4,75,4532]
list15.sort()
print(list15) # [4, 6, 14, 23, 75, 4532]
list15.sort(reverse=True) # 逆序
print(list15) # [4532, 75, 23, 14, 6, 4]
list15_1 = ['r','a','c','s','sd'] # ['a', 'c', 'r', 's', 'sd']
list15_1.sort()
print(list15_1)

# 字符串也可以比大小
print('asasa' > 'dfsdfdsf') # a<d False

# 16
# 队列 FIFO
l =  []
l.append('lsb') # 模拟入队操作
l.append('lsblsb')
l.append('lsblsblsb')

# pop(0)：弹出坐标为0的元素
print(l.pop(0)) # lsb
print(l.pop(0)) # lsblsb
print(l.pop(0)) # lsblsblsb

# 堆栈 LIFO
l =  []
l.append('fpf') # 模拟入栈操作
l.append('fpffpf')
l.append('fpffpffpf')

# pop()：默认弹出最后一个元素。模拟出栈操作
print(l.pop()) # fpf
print(l.pop()) # fpffpf
print(l.pop()) # fpffpffpf