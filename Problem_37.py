__author__ = 'Meemaw'
import math


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


def izLeve(stevilo):
    for i in range(len(stevilo)):
        if(isPrime(int(stevilo[i:]))) != 1:
            return False
    return True

def izDesne(stevilo):
    for i in range(len(stevilo)):
        if(isPrime(int(stevilo[0:len(stevilo)-i]))) != 1:
            return False
    return True

numOfPrimes = 0
vsota = 0
poglej = 11


while numOfPrimes != 11:
    string = str(poglej)
    if izDesne(string) and izLeve(string):
        numOfPrimes+=1
        vsota+=poglej
    poglej+=1
print("Sum of the only eleven primes that are trunctable from left to right and right to left is:")
print(vsota)