__author__ = 'Meemaw'

def isPandigital(stevilo):
    return len(stevilo) == 9 and not "123456789".strip(stevilo)



max = 0
for i in range(10000):
    current = ""
    pomnozi = 1
    while(1):
        current += str(i*pomnozi)
        pomnozi += 1
        if(len(current) >= 9):
            break
    if isPandigital(current) and int(current) > max:
        max = int(current)
print(max)