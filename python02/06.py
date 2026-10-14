import math
n, m, k = map(int, input().split())
s = n*m
print(math.ceil(s/k))
