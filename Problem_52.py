__author__ = 'Meemaw'




def check(multiples):
    digits = []
    for i in range(len(multiples[0])):
        digits.append(multiples[0][i])
    for i in range(1,len(multiples)):
        if len(multiples[i]) != len(digits):
            return False
        for j in range(len(multiples[i])):
            if multiples[i][j] not in digits:
                return False
    return True


def findSmallest():
    i = 1
    while(1):
        current = []
        current.append(str(i))
        current.append(str(i*2))
        current.append(str(i*3))
        current.append(str(i*4))
        current.append(str(i*5))
        current.append(str(i*6))
        if check(current):
            return i
        i+=1

print(findSmallest())