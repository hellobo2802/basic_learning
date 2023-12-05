# 用户交互
'''
1. 输入input('提示内容')，输入的内容全部为str类型。int()可以将纯数字字符串转为int类型，其中包含. _ abc等内容时不行
   python的raw_input()，输入内容全为字符串，input()根据输入内容判断类型，存为相应类型
'''
# 1
name = input('请输入你的姓名：') # 运行停止，等待输入
print(name,type(name))
age = input('请输入你的年龄：')
print(age,type(age)) # 输入纯数字，也为字符串类型
age = int(age)
print(age,type(age))