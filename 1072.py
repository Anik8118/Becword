n = int(input())
count = 0
flag = 0

for _ in range(n):
    x = int(input())
    if 10 <= x <= 20:
        count += 1
    else:
        flag += 1

print(f"{count} in")
print(f"{flag} out")
