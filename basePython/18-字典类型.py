# 字典类型
'''
1. 定义字典四种方式，其中key为不可变类型，可以用整型、浮点型、字符串、元组：① dic = {key:value}; ②dict({}); ③dict(a=1,b=2,c=3); ④{}.fromkeys(keys,values)
2. dict(成对的可迭代对象)：转为字典。必须是可迭代对象
3. 按照key取值与改值。dict[key]，其中，dict('新key')=None：相对于增加值。字典中无序，显示的只是添加的先后顺序,不做为取值的依据。
4. 字典取值：dict.get('a')。如果字典中没有这个key,返回的是None，而dict['a']这种取值会直接报错。
5. 字典的删除值: del\pop\popitem\clear。del dict[key]: 删除key对应的键值对；dict.pop('key')弹出key对应的value,并删除键值对；dict.popitem():以元组形式弹出最后位置的键值对并删除；dict.clear(): 清空所有的值。
6. 方法：len(): 计算键值对个数；'key' in dict: 判断key是否在字典中，返回bool
7. 字典常用内置方法：keys(): py2:获取字典中所有key, 组成一个列表；py3: 获取字典中所有的key, 形成一个迭代器，减小内存占用。 
                   values(): py2: 获取字典中所有的values, 组成一个列表；py3: 获取字典中所有的values, 形成一个迭代器，减小内存占用。
                   items(): py2:获取字典中所有的(key, value), 组成一个列表，列表内的元素为元组类型；py3: 获取字典中所有的(key, value)，形成一个迭代器，减少内存占用。
                   update(): 原来存在key，则更新相应的value; 原来没有key, 则增加key与value
                   setdefault(): 原来存在key, 则返回对应的value; 原来没有key且没设置默认值，则返回默认值None, 原来没有key且设置了默认值，则返回该默认值。
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

# 7 20231206-94
dic71 = {'lsb':'刘少博','fpf':'冯攀峰'}
print(dic71.keys())  # dict_keys(['lsb', 'fpf']), 是一个迭代器
for key in dic71.keys():
    print(key)  # lsb \n fpf

print(dic71.values())  # dict_values(['刘少博', '冯攀峰']), 是一个迭代器
for value in dic71.values():
    print(value)  # 刘少博 \n 冯攀峰

print(dic71.items())  # dict_items([('lsb', '刘少博'), ('fpf', '冯攀峰')]), 是一个迭代器
for item in dic71.items():
    print(item)  # ('lsb', '刘少博') \n ('fpf', '冯攀峰')。元组的形式

me, him = dic71.items()  # 解压赋值
print(me)  # ('lsb', '刘少博')
print(him)  # ('fpf', '冯攀峰')

for key, value in dic71.items():
    print(key, value)  # lsb 刘少博 \n fpf 冯攀峰

# 7 20231206-95
dic71 = {'lsb':'刘少博','fpf':'冯攀峰'}
new = {'fpf': '冯攀峰是', 'type': 'my wife'}
dic71.update(new)  # 放入的是字典：保留原有不变的，更新新值，增加新内容
print(dic71)  # {'lsb': '刘少博', 'fpf': '冯攀峰是', 'type': 'my wife'}

print(dic71.setdefault('type'))  # my wife  当传入的key已有时，返回该key的value值
print(dic71.setdefault('?'))  # None  当传入新key并未设置value时，返回None
print(dic71.setdefault('??', 'Yes'))  # Yes  当传入新key并设置默认value时，返回该value
print(dic71)  # {'lsb': '刘少博', 'fpf': '冯攀峰是', 'type': 'my wife', '?': None, '??': 'Yes'}  所有内容均被添加