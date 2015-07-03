
coins = [1,2,5,10,20,50,100,200]


#Testing inner function memoization

def memoizator(f):
	tabela = dict()
	def inner(a,b):
		h = (a, tuple(b))
		if h in tabela:
			return tabela[h]
		else:
			tabela[h] = f(a,b)
			return tabela[h]
	return inner

@memoizator
def vseMoznosti(vsota, coins):
	if vsota == 0:
		return 1
	if vsota <  0:
		return 0
	if len(coins) == 0:
		return 0
	return vseMoznosti(vsota,coins[1:]) + vseMoznosti(vsota-coins[0], coins)


#Solution:

tabela = dict()

def navadno(vsota, coins):
	h = (vsota, tuple(coins))
	if h in tabela:
		return tabela[h]
	if vsota == 0:
		return 1
	if vsota < 0:
		return 0
	if len(coins) == 0:
		return 0
	tabela[h] = navadno(vsota, coins[1:]) + navadno(vsota-coins[0], coins)
	return tabela[h]
	


print(vseMoznosti(200,coins))


