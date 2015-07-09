__author__ = 'Meemaw'



list = []
indeks = 0

with open("odpri.txt") as file:
    for line in file:
        indeks+=1
        line = line.split()
        list.append(line)
list.append([0]*(indeks+1))

for i in range(indeks-1,-1,-1):
    for x in range(len(list[i])):
        list[i][x] = max(list[i+1][x],list[i+1][x+1]) + int(list[i][x])
print(list[0])

