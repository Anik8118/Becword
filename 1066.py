count = 0
flag = 0
dod = 0
sub = 0

for _ in range(5):
    a = int(input())
    if a % 2 == 0:
        count += 1
    if a % 2 != 0:
        flag += 1
    if a > 0:
        dod += 1
    if a < 0:
        sub += 1

print(f"{count} valor(es) par(es)")
print(f"{flag} valor(es) impar(es)")
print(f"{dod} valor(es) positivo(s)")
print(f"{sub} valor(es) negativo(s)")
