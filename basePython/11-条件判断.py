# 条件判断
'''
1. 显示布尔值：直接使用true\False；通过条件作为判断的布尔值
2. 隐式布尔值：所有值都可以当作布尔值使用。其中大部分为True,只有0,None,空（列表、字符串）为Fasle
'''
# 1 显示布尔值
if True: # 直接使用True显示布尔值
    print('hello,')
if (10 > 18): # 使用条件判断，为显示布尔值
    print('no')
else:
    print('world!')

# 2 隐式布尔值
if 10:
    print('True')
if 0: # 恒不成立
    print('False_0')
if None: # 恒不成立
    print('False_None')
if '': # 恒不成立
    print('False_空')
if ' ': # 空值 != 空
    print('True_  ')
if []: # 恒不成立
    print('False_[]')