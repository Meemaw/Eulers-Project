__author__ = 'Meemaw'

import math




max = 0
ix = 0
kombinacije = set()

for i in range(1,1001):
    currentMax = 0
    upperBound = int(i/2)
    for a in range(upperBound):
        for b in range(upperBound):
            c = math.sqrt(a**2+b**2)
            if a + b + c != i:
                continue
            current = []
            current.append(a)
            current.append(b)
            current.append(c)
            current.append(i)
            current.sort()
            dodaj = tuple(current)
            if dodaj not in kombinacije:
                kombinacije.add(dodaj)
                currentMax+=1
    if currentMax > max:
        max = currentMax
        ix = i

print("Max number of triangles: " + str(max))
print("Index: " + str(ix))