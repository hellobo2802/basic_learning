# 字典类型
'''
1. 定义字典四种方式，其中key为不可变类型，可以用整型、浮点型、字符串、元组：① dic = {key:value}; ②dict({}); ③dict(a=1,b=2,c=3); ④{}.fromkeys(keys,values)
2. dict(成对的可迭代对象)：转为字典。必须是可迭代对象
3. 按照key取值与改值。dict[key]，其中，dict('新key')=None：相对于增加值。字典中无序，显示的只是添加的先后顺序,不做为取值的依据。
4. 字典取值：dict.get('a')。如果字典中没有这个key,返回的是None，而dict['a']这种取值会直接报错。
5. 字典的删除值: del\pop\popitem\clear。del dict[key]: 删除key对应的键值对；dict.pop('key')弹出key对应的value,并删除键值对；dict.popitem():以元组形式弹出最后位置的键值对并删除；dict.clear(): 清空所有的值。
6. 方法：len(): 计算键值对个数；'key' in dict: 判断key是否在字典中，返回bool
'''

# 1 ①
dic1 = {'abc':1,2:222,2.13:3,(4,3,2):1}
print(dic1)

#1 ②,③
dic12 = dict({'lsb':'刘少博','fpf':'冯攀峰'})
dic122 = dict(lsb = '刘少博',fpf = '冯攀峰')
print(dic12)
print(dic122)

# 1 ④
keys = ['1','2','3']
dic13 = {}
for key in keys:
    dic13[key] = None
    # dic12[新key] = None 相当于添加值
print(dic13)
dic131 = {}.fromkeys(keys,None)
print(dic131)

# 2
l2 = [('a',1),['123',123]]
dic2 = dict(l2)
print(dic2)

# 3
dic3 = {'lsb':'刘少博','fpf':'冯攀峰'}
dic3['lsblsb'] = 'fpffpf'
print(dic3) # {'lsb': '刘少博', 'fpf': '冯攀峰', 'lsblsb': 'fpffpf'}

# 4 dict.get('a')取值
dic4 = {'lsb':'刘少博','fpf':'冯攀峰'}
print(dic4.get('fpf'))

# 5 del、pop、popitem
dic5 = {'lsb':'刘少博','fpf':'冯攀峰'}
del dic5['lsb']
print(dic5) # {'fpf': '冯攀峰'}

dic52 = {'lsb':'刘少博','fpf':'冯攀峰'}
print(dic52.pop('lsb')) # 弹出value值，并删除
print(dic52) # {'fpf': '冯攀峰'}

dic53 = {'lsb':'刘少博','fpf':'冯攀峰'}
print(dic53.popitem()) # 弹出最后添加的键值对，并删除。返回值为元组：('fpf', '冯攀峰')
print(dic53) # {'lsb': '刘少博'}

dic54 = {'lsb':'刘少博','fpf':'冯攀峰'}
print(dic54.clear()) # 清空所有的值 返回None

# 6 len、in(not in)
dic61 = {'lsb':'刘少博','fpf':'冯攀峰'}
print(len(dic61)) # 2

dic62 = {'lsb':'刘少博','fpf':'冯攀峰'}
print('fpf' in dic62) # True
94