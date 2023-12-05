# 字符串详解
'''
1. 字符串类型转换：str(): 字符串的直接赋值默认调用了str()；str()可以将任何放入其中的值变为字符串类型
2. 字符串索引取值: 字符串只可以索引取值，不能索引改值
3. 字符串切片：复制字符串内的值。str[a:b]: 取str[a]-str[b-1]内容，同样是顾头不顾尾。
   str[a:b:stride] # stride表示步长
   反向步长-1，但要求str[m:n:-1]m在后，n在前，同样顾头不顾尾，最前面到n+1。str[4:0:1]失败=str[0:4:-1]失败。
   str[::-1]:从后往前取一遍值
4. 字符串strip()去除空格：去除字符串两端的空格。()内默认不写值的话，去除两端空格，也可以设置要去除的符号。
   name.strip('#!,') : 去除name字符串两端的'#!,'等符号。直到两端不是以参数内值为两端值
5. 字符串split()拆分：可传入两个参数，第一个参数表示分割符号,默认表示以空格为分割;第二个参数表示分割次数。最后存为一个列表。
   e.g. 'a-b-c-d'.split('-',2) => 以-为拆分符号，拆分2次：['a','b','c-d']
6. 字符串循环：e.g. for i in 'asasasa'
7. 字符串长度len(): len('aaa')=> 3。len(变量名)也可用于计算列表、字典的长度
8. 成员运算in; not in
9. 英文字符串改变大小写upper()+lower().首字母大写其余小写:capitalize()
10 字符串的详细操作：操作后产生一个新的值，不改变原值，因为字符串为不可变类型。原值地址断开连接后，被回收机制清理
   strip(),lstrip(),rstrip(): strip()去除两端的空格；lstrip()去除左端的空格；rstrip()去除右端的空格
   split(),rsplit(): split()从左往右拆分；rsplit()从右往左拆分
   format(): 格式化字符串内容 'abc{}'.format('d') == 'abc{od}.format(od='d')' == 'abcd'
   startswith(),endswith(): startswith()判断是否以某内容开始；endswith()判断是否以某内容结束
   join(): 将列表元素拼接为字符串，要求列表内元素都为字符串类型。以分隔符.join()运行。e.g. '-'.join(['1','2'])
   replace(): a.replace('x','y',n): 把字符串a的前n个'x'符号转为'y'
   isdigit(): 判断字符串是否为纯数字
   ......
11. 猜数游戏
'''
# 1
name = str('刘少博')
name1 = '冯攀峰'
print(name,type(name),name1,type(name1)) # 方便起见，str()一般不写

a = ['as','1',1]
print(a,type(a)) # ['as', '1', 1] <class 'list'> 列表类型
list1 = str(a) # ['as', '1', 1] <class 'str'> 字符串类型
print(list1,type(list1))

# 2 索引取值
str2 = 'If I were a bird, I would fly in the sky!' # 虚拟语气，were+ would do
print(str2[-1]) # !

str2[0] = 'i' # 字符串不可以按照索引改值！！！

# 3 索引切片
str2 = 'If I were a bird, I would fly in the sky!'
str3 = str2[0:16] # 顾头不顾尾
# str2[0:]0到最后；str2[:16]0-15；str2[:]取值全部
print(str3)

# 3 带有步长
str3 = str2[::3]
print(str3) #IIe bdIodlit y

# 3 失败的切片
str3_1 = str2[0:4:-1] # 空，啥都没取到。因为从前往后取，但步长反方向-1
print(str3_1)
str3_2 = str2[4:0:1] # 空，啥都没取到。因为从后往前取，但步长正方向1
print(str3_2)

# 3 反向切片 最前面的取不到
str3_3 = str2[16:0:-1] 
print(str3_3) # ',drib a erew I f' 取到'，',但拿不到0号位的'I'
# 3 从后往前取一遍
str3_4 = str2[::-1]
print(str3_4) # '!yks eht ni ylf dluow I ,drib a erew I fI '

# 4 strip() 去除空格?去除字符串两端的空格
str2 = '      If I were a bird, I would fly in the sky!   '
str4_1 = str2.strip() # 默认去除两端空格
print(str4_1)
str2 = 'I      If I were a bird, I would fly in the sky!   #@#@#'
str4_2 = str2.strip('I#@ ') # 从字符串两端看，两端为参数内容的值（strip('I#@ ')'I#@ '为参数）都会被删掉
print(str4_2)

# 去除用户输入的空格
user_name = input('请输入你的账户：').strip() # input()的内容全为str类型
user_password = input('请输入你的密码：').strip() # str类型可用strip()去除两端的空格
if user_name == '123' and user_password == '123':
   print('登录成功')
else:
   print('账号或密码错误！')
 
# 5 split()
str5 = 'a b c d'
str5_1 = str5.split() # 默认以空格为分隔符，分割所有
print(str5_1) # ['a', 'b', 'c', 'd'] 存为列表
str5 = 'a-b-c-d'
str5_2 = str5.split('-',2) # 以'-'为分隔符，分割2次
print(str5_2) # ['a', 'b', 'c-d']

# 7 len()计算长度，同样适用于列表、字典
str7 = 'asasaasav vx cvx '
num1 = len(str7) # len(字符串名)
print(num1)
a = ['a',1,23,4]
print(len(a)) # len(列表名)：可输出列表长度
b = {'1':1,2:3}
print(len(b)) # len(字典名)：可输出字典长度

# 8 in/not in 判断子字符串内容是否在父字符串里，返回布尔类型
print('刘少博' in '刘少博和冯攀峰') # True

# 9 upper(): 英文变为大写；lower(): 英文变为小写；capitalize(): 首字母大写，其余小写
str9 = 'asaAasasacfsdcfm11212刘少博'
print(str9.upper()) # ASAAASASACFSDCFM11212刘少博
print(str9.lower()) # asaaasasacfsdcfm11212刘少博
print(str9.capitalize()) # Asaaasasacfsdcfm11212刘少博

# 10
# strip(),lstrip(),rstrip(): strip()去除两端的空格；lstrip()去除左端的空格；rstrip()去除右端的空格
str10 = '    sajs   '
print(str10.strip())
print(str10.lstrip())
print(str10.rstrip())
# split(),rsplit(): split()从左往右拆分；rsplit()从右往左拆分
str10 = 'a-b-c-d'
print(str10.split('-',1)) # ['a', 'b-c-d']
print(str10.rsplit('-',1)) # ['a-b-c', 'd']
# startswith(),endswith(): startswith()判断是否以某内容开始；endswith()判断是否以某内容结束
str10 = '刘少博 暗哨送i就 奥斯本那块 冯攀峰'
print(str10.startswith('刘少博')) # True
print(str10.endswith('冯攀峰')) # True
# join(): 将列表元素拼接为字符串，要求列表内元素都为字符串类型。以分隔符.join()运行。e.g. '-'.join(['1','2'])
list10 = ['刘少博','冯攀峰','lover']
print('-'.join(list10)) # 刘少博-冯攀峰-lover
print(' '.join(list10)) # 刘少博 冯攀峰 lover
# replace(): a.replace('x','y',n): 把字符串a的前n各'x'符号转为'y'
str10 = '刘少博和冯攀峰'
print(str10.replace('和','and',1)) # 刘少博and冯攀峰
# isdigit(): 判断字符串是否为纯数字
str10 = '5201314'
print(str10.isdigit()) # True

# 11 猜数游戏
while 1:
   num = input('猜一个数字？').strip() # 去除两端的空格
   # start: handle user input_num 
   if num.isdigit(): # 判断用户输入的是否为纯数字
      num = int(num) # input()输入的为字符串类型，转为int
   else:
      print('捣蛋鬼，别捣蛋。输入纯数字！')
      continue # 跳过本次循环，使用户再次输入
   # end: handle user input_num 
   # start: judge the size of number
   if num > 520:
      print('猜大了！')
   elif num < 520:
      print('猜小了！')
   else:
      print('恭喜你，猜中了。')
      break
   # end: judge the size of number