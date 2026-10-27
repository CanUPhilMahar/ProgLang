t = int(input())
for i in range(t):
    n = int(input())
    p, q = map(int, input().split())
    full = p//q
    point = p%q
    bi = []
    for j in range(n):
        point *= 2
        if point >= q:
            bi.append('1')
            point -= q
        else:
            bi.append('0')
    res = str(full) + '.' + ''.join(bi)
    print(res)
