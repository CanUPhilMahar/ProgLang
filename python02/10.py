s = input()
sq = ""
for c in s:
    if (c == '('):
        sq += ')'
    else:
        sq += '('
print(sq)
