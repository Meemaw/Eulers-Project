__author__ = 'Meemaw'


memo = [0] * 100000



def fib(n):
    if(n == 1 or n == 2):
        return 1
    if(memo[n] != 0):
        return memo[n]
    memo[n] = fib(n-1) + fib(n-2)
    return memo[n]

max = 0;
i = 1
print("Please enter upper bound for number of digits:")
meja = input()
while(1 == 1):
    stevilo = fib(i)
    count = len(str(stevilo))
    if(count > max):
        max = count
    if(max == meja):
        break
    i+= 1

print("Index of first term in the Fibonacci sequence to contain " + str(meja) + " digits:")
print(i)