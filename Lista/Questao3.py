x = int(input(""))
n = 2
fatores = []

while x > 1:
    if x % n == 0:
        if n == 2 or (2 ** (n-1)) % n == 1:
            fatores.append(n)
            x = x / n
    else:
        n += 1
print(fatores)
