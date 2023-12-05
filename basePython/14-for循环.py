# for循环
'''
1. for循环便于 循环遍历！for循环格式：for 变量名xxx in 可迭代对象。可迭代对象有 列表、字典、字符串、元组、集合
2. for循环取字典值
3. for循环取字符串值
4. for循环执行一定的次数:顾头不顾尾的range。range(10):0-9；range(1,10):1-9;range(1,10,2):1，3，5，7，9
   range(a,b,s):s指步长。最后的值不会超过b
   python2中range()会直接生成一个很多数据的列表
   python3中的range()是一个迭代器，用来每次生成一个新数据。节省内存空间
5. for-else-break-continue: else:for正常结束后执行else；break:跳出本层循环；continue: 跳过本次循环，继续下次循环
6. for循环嵌套：先执行内部循环，可用break跳出内部循环。外部循环依次，内部循环一轮。
7. 9*9乘法表：内层可根据外层i动态变换;print(,end='\t'或者end='')以Tab结束或者以''结束；默认为'\n',以换行结束
'''
# 1 for循环 也叫 遍历循环、取值循环、迭代循环
love = ['刘少博','冯攀峰']
for a in love:
    print(a)
# 对于循环取值，while繁琐。while循环也叫 条件循环
i = 0
while i < len(love):
    print(love[i])
    i += 1 
# while时不达目的不罢休，一直条件循环。for是在迭代对象里循环一次

# 2 for循环取字典值时，依次拿出key值。然后使用dict[key]就可以取到对应的value
dict = {'a':'b',1:'a','刘少博':'冯攀峰'}
for i in dict:
    print(i) # a 1 刘少博
    print(dict[i]) # b a 冯攀峰

# 3 for迭代取值可以把字符串的内容一个一个输出
a = 'hello world!'
print(a[-1]) # 可以使用字符串+下标的方式取到对应的字符
for i in a:
    print(i) # for循环可以直接取值

# 4 顾头不顾尾的range()
for i in [1,2,3]: # 循环100次时，总不能写1-100吧
    print('aaa')
for i in range(3):
    print('bbb   ',i)
for i in range(0,3,2): # 只有0，2，不会超过3
    print('ccc   ',i)
# python2中range()会直接生成一个很多数据的列表
# python3中的range()是一个迭代器，用来每次生成一个新数据。节省内存空间

# 5 break跳出本层循环
for i in range(5):
    print(i)
    if i == 2:
        break # 跳出本层循环
# 5 continue跳过本次循环
for i in range(5):
    if i == 2:
        continue # 跳出本层循环
        print(i) # 不会打印
    else:
        print(i)
# 5 else 正常结束后执行
for i in range(5):
    print(i)
else:
    print('正常结束，执行else内容')

# 6 for循环嵌套
for i in range(4):
    print('外层循环->',i)
    for j in range(4): # 想到什么？没错，乘法表
        print('内层循坏->',j)

# 7 9*9乘法表
for i in range(1,10):
    for j in range(1,10):
        if i <=j:
            print(i,'*',j,'=',i*j,end = ' ') # end 默认为'\n'
    print() 

# 7 9*9另一种方式 end='\t': print后接四个空格
for i in range(1,10):
    for j in range(1,i+1): # 内层可根据外层动态变换
        print(f'{j}x{i}={i*j}',end='\t') # f'{i}+{j}' {}用于字符串拼接 
    print('')      