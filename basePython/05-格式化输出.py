# 格式化输出（格式化字符串）
'''
1. %s 无论输入数字、元组、列表等全部按为str类型，%d 输入类型为整型。用%有两种方式，对应位置和对应字典。%+元组()或者%+{}字典
2. format()是字符串的一种函数，在()里面输入值，也有两种方式：对应位置和key。前面占位符为{}或者{索引}.format() 对应位置:{}中无值的话，按照对应位置；{索引}可以使用()里面值的索引下标。两者不能混在一起用。key值：在.format(name='',age=''),占位符使用{name}、{age}
   format()输入的数据类型和%s一样，全部为str类型
3. 格式化填充
   format输出占位符写{0:*^10}/{name:*^10}:'0'对应后面索引，name'对应后面.format()中的key值，':'必须写，'*'要填充的内容，'^ > <'填充方式依次为左右居中、居左、居右，'10'表示填充个数
   format输出占位符写{0:.2f}/{money:.2f}:'0'对应后面索引，'money'对应后面.format()中的key值，'.2f'表示按照四舍五入取小数点后2位
4. f'xxx{变量名}'：占位符用{变量名}
5. 格式化速度：f ＞ .format ＞ %。格式化兼容性：.format 2.7左右；f 3.5以上。因此推荐使用.format和f
'''
# 1 % 对应位置
talk = 'I am %s, I like %s' %('刘少博','冯攀峰') # %直接跟在后面，不需要','，%()内容位置不能改变 1个之的时候不用要()
print(talk)
talk1 = 'I come from %s' %'China'
print(talk1)
age = 'My age is %d'%22
print(age)
# 1 对应字典 %()s ()内写字典的名称
talk = 'I‘m %(fpf)s, I preperence %(lsb)s' %{'lsb':'刘少博','fpf':'冯攀峰'} # %直接加{}
print(talk)

# 2 format() 对应位置，{}中无值的话，按照对应位置；{索引}可以使用()里面值的索引下标。两者不能混在一起用
talk1 = 'I am {}, I like {}'.format('冯攀峰','刘少博')
print(talk1)
talk2 = 'I am {1}，I like {0}'.format('冯攀峰','刘少博')
print(talk2)

# 2 format() key值：在.format(name='',age=''),占位符使用{name}、{age}
talk1 = 'I am {name},I am {age}'.format(name='冯攀峰',age='21')
print(type(age)) # 字符串类型
print(talk1)

# 3 {0:*^10} ^左右居中
a1 = '{0:*^10}'.format('开始')
print(a1)
# {name:*^10} ^左右居中
a2 = '{name:*^10}'.format(name='结束')
print(a2)
# {0:*>10} >居中
a3 = '{0:*>10}'.format('开始')
print(a3)
# {name:*<10} <居右
a4 = '{name:*<10}'.format(name='结束')
print(a4)
# {0:.2f}
a5 = 'money is {0:.2f}'.format(31421211.24889) 
print(a5)
# {:爱^20} # 只有一个值的话可以不写0
a6 = 'fpf is {:爱^20}'.format('冯攀峰')
print(a6)

# 4 先用input输入，再使用f格式化
name = input('你的名字是：')
lover = input('你的爱人是：')
print(f'我的名字是{name},我的爱人是{lover}') # f 直接加要输出的格式内容，占位符使用{变量名}