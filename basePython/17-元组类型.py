# 元组类型
# 一组数据只有读的需求，使用元组更加节省内存
'''
1. 元组（不可变）。创建时实际为tuple()
2. 只有一个元素时，为了区分，在()最后需要加一个逗号！
3. 元组的不可变在于里面存放的内存地址不可变。如存放不可变类型，值不能被改变；若存放可变类型(列表和字典)，可变类型内部的值可以改变，但可变类型的地址不允许被改变。
4. 类型转换：tuple(内容)：内容处可以存放字符串、列表、字典、range(5)
5. 内置方法：index()和count()。index(元素)：查找 元素 的起始索引；count(元素)：统计 元素 出现的个数。
6. 索引取值、切片、统计长度、成员运算、循环等与列表相似或一致。
'''
# 1 原组合列表一样，可以存放各种类型
t1 = (1,'abc',0.1314,1.2,[1,2,3],{'a':1,'b':'c'})
print(type(t1)) # tuple

# 2 只有一个元素时，为了区分，在()最后需要加一个逗号
t2 = (88) # 没有添加逗号
print(type(t2)) # <class 'int'>
t2 = (88,) # 添加逗号，变为元组类型
print(type(t2)) # <class 'tuple'>

# 3 元组内地址不允许被改变
t3 = (1,'abc',0.1314,1.2,[1,2,3],{'a':1,'b':'c'})
# 0: 值1的内存地址 ————> 1
# 1：值‘abc’的内存地址 ————> 'abc'
# t3[0] = '1' # TypeError: 'tuple' object does not support item assignment
t3[4][0] = 444
print(t3) # (1, 'abc', 0.1314, 1.2, [444, 2, 3], {'a': 1, 'b': 'c'})
t3[5]['a'] = 123
print(t3) # (1, 'abc', 0.1314, 1.2, [444, 2, 3], {'a': 123, 'b': 'c'})

# 4 类型转换
t4_1 = tuple('刘少博和冯攀峰')
print(t4_1) # ('刘', '少', '博', '和', '冯', '攀', '峰')
t4_2 = tuple(['lsb','fpf'])
print(t4_2) # ('lsb', 'fpf')
t4_3 = tuple({'1':1,'2':2})
print(t4_3) # ('1', '2')
t4_4 = tuple(range(5))
print(t4_4) # (0, 1, 2, 3, 4)