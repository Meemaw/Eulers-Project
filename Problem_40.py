__author__ = 'Meemaw'






mojString = ""
dodaj = 0
while(len(mojString) <= 1000000):
    mojString += str(dodaj)
    dodaj+=1
result = int(mojString[1])*int(mojString[10])*int(mojString[100])*int(mojString[1000])*int(mojString[10000])*int(mojString[100000])*int(mojString[1000000])
print(result)