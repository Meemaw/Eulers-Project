__author__ = 'Meemaw'
import sys


def jeUstrezen(string,i,j,x,y):
    preveri = str(i)+str(j)+str(x)+str(y)
    if sorted(preveri) == sorted(string):
        return 1
    return 0


max = 0
mojSet = set()
vsota = 0
print("Please insert wanted power:")
power = input()
for i in range(2,236196):
    string = str(i)
    sumOfPowers = 0
    for j in range(len(string)):
        sumOfPowers += int(string[j])**power
    if sumOfPowers == i:
        mojSet.add(i)
print("Number of integers that can be written as the sum of " + str(power) + " powers of their digits:")
print(len(mojSet))
for stevilo in mojSet:
    vsota+=stevilo
print("Sum of all the numbers that can be written as the sum of their " + str(power) + " powers:")
print(vsota)