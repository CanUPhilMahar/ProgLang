code = input()

numbers = []
pos = 0

while pos < len(code):
    z_minus_1 = 0
    while pos + z_minus_1 < len(code) and code[pos + z_minus_1] == '0':
        z_minus_1 += 1

    z = z_minus_1 + 1
    pos += z_minus_1

    y_bin = code[pos:pos + z]
    y = int(y_bin, 2)
    pos += z

    if y == 1:
        x_bin = '1'
    else:
        x_bin = '1' + code[pos:pos + y - 1]
        pos += y - 1

    x = int(x_bin, 2)
    numbers.append(x)

print(len(numbers))
print(' '.join(map(str, numbers)))
