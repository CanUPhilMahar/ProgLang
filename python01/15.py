a, b = map(int, input().split())
while(a>0):
    d = a
    a = b%a
    b = d
print(b)    