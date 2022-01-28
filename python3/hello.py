# coding=utf-8
from decimal import *
# 此处设置有效数字为2位
getcontext().prec = 2

i = Decimal(input())
if i <= 10:
    print(Decimal(i)*Decimal('0.1'))
elif i >= 10 and i < 20:
    print(Decimal(i)*Decimal('0.1')+(Decimal(i)-Decimal('10'))*Decimal('0.075'))
    print('1')
elif i >= 20 and i < 40:
    print(Decimal('20')*Decimal('0.075')+(Decimal(i)-Decimal('20'))*Decimal('0.05'))
    print('2')
elif i >= 40 and i < 60:
    print(Decimal('40')*Decimal('0.05')+(Decimal(i)-Decimal('40'))*Decimal('0.03'))
    print('3')
elif i >= 60 and i < 100:
    print(Decimal('60')*Decimal('0.03')+(Decimal(i)-Decimal('60'))*Decimal('0.015'))
    print('4')
else:
    print(Decimal('100')*Decimal('0.015')+(Decimal(i)-Decimal('100'))*Decimal('0.01'))
    print('5')

