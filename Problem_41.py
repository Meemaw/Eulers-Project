__author__ = 'Meemaw'


import math

def isPandigital(stevilo):
    z = "123456789"
    return not z[:len(stevilo)].strip(stevilo)

def isPrime(stevilo):
    if stevilo == 1:
        return False
    meja = int(math.sqrt(stevilo)+1)
    if(stevilo > 2 and stevilo % 2 == 0):
        return False
    for i in range(3,meja,2):
        if stevilo % i == 0:
            return False
    return True



def largestPandigitalPrime():
    #bound for primes
    zacni = 7654321
    while(1):
        if isPandigital(str(zacni)) and isPrime(zacni):
            return zacni
        zacni-=1



print(largestPandigitalPrime())

