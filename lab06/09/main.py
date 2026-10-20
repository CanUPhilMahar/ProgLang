value = 1
for letter in "abcdefghijklmnopqrstuvwxyz":
    for num in range(100):
        globals()[f"{letter}{num}"] = value
        value += 1
print(a0)     
print(a99)   
print(b0)     
print(z99)   
