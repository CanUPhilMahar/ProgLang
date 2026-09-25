a, b = map(int, input().split())
while (a>0):
    if not(b%2==0 or b%3==0 or b%5==0 or b%7==0):
        a-=1
        print(b, end = " ")
    b+=1
        