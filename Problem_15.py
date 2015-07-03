__author__ = 'Meemaw'
import sys





def route_num(cube_size):
    L = [1] * cube_size
    for i in range(cube_size):
        for j in range(i):
            L[j] = L[j]+L[j-1]
        L[i] = 2 * L[i - 1]
    return L[cube_size - 1]


def factorial(n):
    if(n == 1): return 1
    return n* factorial(n-1)


def PE15(i,j,goal_i,goal_j,memo):
    k = (2 ** i) * (3 ** j)
    if k in memo:
        return memo[k]
    if i == goal_i and j == goal_j:
        return 1
    elif i > goal_i or j > goal_j:
        return 0
    else:
        return PE15(i + 1,j,goal_i,goal_j,memo) + PE15(i,j + 1,goal_i,goal_j,memo)
        
print("Please insert size of field:")
x = input()
print("Number of routes in " +str(x) +"*"+str(x)+ " grid:")
print(route_num(x))
