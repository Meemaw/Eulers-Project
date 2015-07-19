__author__ = 'Meemaw'


import math


def nCr(n,r):
    f = math.factorial
    return f(n) / f(r) / f(n-r)


result = 7 * (1 - nCr(60,20) / nCr(70,20))
print(str(result)[:11])