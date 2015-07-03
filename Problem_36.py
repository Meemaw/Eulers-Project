__author__ = 'Meemaw'


def isPalindrome(x, i):
    zacetek = 0
    konec = len(x)-1
    while zacetek <= konec:
        if x[zacetek] != x[konec]:
            return 0
        zacetek+=1
        konec-=1
    return 1

vsota = 0
print("Please insert upper bound:")
x = int(input())
for i in range(1,x+1):
    if isPalindrome(str(i),10) and isPalindrome(str(bin(i)[2:]),2):
        vsota+=i

print("Sum of all numbers below " + str(x) + " which are palindromic in base 10 and 2 is:")
print(vsota)