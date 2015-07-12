__author__ = 'Meemaw'



vhodnaTabela = []
indeks = 0



with open("odpri.txt") as file:
    for line in file:
        indeks+=1
        line = line.split()
        vhodnaTabela.append(map(int,line))
vhodnaTabela.append([0]*(indeks+1))


for i in range(indeks-1,-1,-1):
    for x in range(len(vhodnaTabela[i])):
        vhodnaTabela[i][x] += max(vhodnaTabela[i+1][x],vhodnaTabela[i+1][x+1])
print(vhodnaTabela[0])

