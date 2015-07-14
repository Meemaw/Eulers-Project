__author__ = 'Meemaw'




def isPandigital(stevilo):
    return len(stevilo) == 9 and not "123456789".strip(stevilo)


p = set()
for i in range(2,60):
    start = 1234 if i < 10 else 123
    # 1 digit number times 4 digit number can produce 9 digit number
    # 2 digit number times 3 digit number can produce 9 digit number
    for j in range(start,10000//i):
        product = i*j
        result = str(i) + str(j) + str(product)
        if isPandigital(result):
            p.add(product)
print(sum(p))


