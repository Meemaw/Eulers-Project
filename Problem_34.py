__author__ = 'Meemaw'

import math

def isCurious(number):
    currentSum = 0
    for digit in number:
        currentSum += math.factorial(int(digit))
    return int(number) == currentSum


# biggest possible hipothetical upperBound
upperBound = 7*math.factorial(9)
sum = 0
for i in range(3,upperBound):
    if isCurious(str(i)):
        sum+=i
print(sum)