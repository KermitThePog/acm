from bisect import bisect_right


n = int(input())
arr = input()
prices = list(map(int,arr.split(' ')))
prices.sort()


q = int(input())

for i in range(q):
	print(bisect_right(prices, int(input())))
