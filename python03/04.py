n = int(input())
data = list(map(int, input().split()))
result = []
for x in data:
    x_bin = bin(x)[2:]
    y = len(x_bin)
    y_bin = bin(y)[2:]
    z = len(y_bin)
    code = '0' * (z - 1) + y_bin + x_bin[1:]
    result.append(code)
print(''.join(result))
