import math
n, m, c, k = map(int, input().split())
b = n*m
b -= k
b = math.ceil(b/200)
print(b*c)
