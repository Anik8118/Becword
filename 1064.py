count = 0
sum = 0.0

for i in range(1, 7):
    n = float(input())
    if n > 0:
        sum += n
        count += 1

average = sum / count if count > 0 else 0

print(f"{count} valores positivos")
print(f"{average:.1f}")
