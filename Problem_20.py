__author__ = 'Meemaw'

def factorial(n):
    if(n == 1): return 1
    return n * factorial(n-1)

print("Please insert a number:")
x = input()
string = str(factorial(x))

vsota = 0

for i in range(len(string)):
    vsota += int(string[i])


print("Sum of the digits in the number " + str(x) + "! is:");
print(vsota)
