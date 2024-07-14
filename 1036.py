import math

a, b, c = map(float, input().split())

bf1 = b**2 - 4 * a * c

if bf1 < 0 or a == 0:
    print("Impossivel calcular")
else:
    bf2 = (-b + math.sqrt(bf1)) / (2 * a)
    bf3 = (-b - math.sqrt(bf1)) / (2 * a)
    print(f"R1 = {bf2:.5f}")
    print(f"R2 = {bf3:.5f}")
