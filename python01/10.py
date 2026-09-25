a, b, c = map(int, input().split())
if(a>b):
    d=a
    a=b
    b=d
if (c>=a and c<=b):
    print(0)
elif (c<a):
    print(a-c)
else:
    print(c-b)            