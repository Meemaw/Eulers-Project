__author__ = 'Meemaw'

import string

def generateTriangle(aNumber):
    triangleNumbers = []
    n = 1
    while len(triangleNumbers) < aNumber:
        stevilo = int((n*(n+1))/2)
        triangleNumbers.append(stevilo)
        n+=1
    return triangleNumbers

def calculateValue(aWord):
    value = 0
    for i in range(1,len(aWord)-1):
        value += ord(aWord[i]) - 64
    return value





triangles = generateTriangle(20)


numberOf = 0
myWords = []
with open("words.txt") as file:
    for line in file:
        currentLine = line.split(",")
        for i in range(len(currentLine)):
            if calculateValue(currentLine[i].strip()) in triangles:
                numberOf += 1
print(numberOf)








