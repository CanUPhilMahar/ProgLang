n = int(input())
otv = [0] * n
for i in range(n):
    data = list(map(int, input().split()))
    v = []
    for j in range(4):
        p = data[j * 2]
        q = data[j * 2 + 1]
        if q < 0:
            p = -p
            q = -q
        v.append((p, q))
        p1 = v[0][0] * v[1][1] + v[1][0] * v[0][1]
    p2 = v[2][0] * v[3][1] + v[3][0] * v[2][1]
    q1 = v[0][1] * v[1][1]
    q2 = v[2][1] * v[3][1]
    a = p1 * q2
    b = p2 * q1
    if a == b:
        otv[i] = 0
    elif a < b:
        otv[i] = -1
    else:
        otv[i] = 1
print(' '.join(map(str, otv)))
