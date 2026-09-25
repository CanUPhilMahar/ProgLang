a, b, c = input().split()
if (len(a) > len(b) and len(a) > len(c)):
    print(a)
elif (len(b) > len(a) and len(b) > len(c)):
    print(b)
else:
    print(c)        