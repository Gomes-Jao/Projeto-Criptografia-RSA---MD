from time import process_time
x = 1
count = 0
while process_time() < 60:
    if x == 2 or (2 ** (x-1)) % x == 1:
        count += 1
        print(x)
    x += 1
print(f"Primos encontrados: {count}")
