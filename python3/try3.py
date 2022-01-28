# coding=utf-8
from decimal import *
# 此处设置有效数字为2位
# getcontext().prec = 2

i = int(input())
if i <= 100000:
    print(i * 0.1)
elif i >= 100000 and i < 200000:
    print(100000 * 0.1 + (i - 100000) * 0.075)
elif i >= 200000 and i < 400000:
    print(200000 * 0.075 + (i - 200000) * 0.05)
elif i >= 400000 and i < 600000:
    print(400000 * 0.05 + (i - 400000) * 0.03)
elif i >= 600000 and i < 1000000:
    print(600000 * 0.03 + (i - 600000) * 0.015)
else:
    print(1000000 * 0.015 + (i - 1000000) * 0.01)
