__author__ = 'Meemaw'



print("Please insert upper bound:")
x = int(input())
print("Please insert last n numbers to be printed:")
last = int(input())


vsota = 0
for i in range(1,x+1):
    vsota += i**i

if(last > vsota):
    print("Sum doesnt have " +str(last) + " digits")
    print("Sum: " + str(vsota))
else:
    print("Last " + str(last) + " n digits of sum is:")
    print(str(vsota)[-last:])
