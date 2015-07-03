__author__ = 'Meemaw'
import math
import itertools


def isPrime(stevilo):
    if stevilo == 1:
        return 0
    meja = int(math.sqrt(stevilo)+1)
    if(stevilo > 2 and stevilo % 2 == 0):
        return 0
    for i in range(3,meja,2):
        if stevilo % i == 0:
            return 0
    return 1

vsota = 0

print("Please insert upper bound:")
meja = int(input())

def isCilcular(rotations):
    for rotation in rotations:
        if isPrime(rotation) == 0:
            return 0
    return 1

def get_rotations(num):
    string_num = str(num)
    rotations = []
    for i in range(len(string_num)):
        rotations.append(int(string_num[i:] + string_num[0:i]))
    return rotations

for i in range(1,meja):
    if isCilcular(get_rotations(i)) == 1:
        vsota+=1

print("Number of circular numbers below " + str(meja) + " is:")
print(vsota)

