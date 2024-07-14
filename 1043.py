a, b, c = map(float, input().split())

if (a + b) > c and (b + c) > a and (c + a) > b:
    perimetro = a + b + c
    print(f"Perimetro = {perimetro:.1f}")
else:
    area = 0.5 * (a + b) * c
    print(f"Area = {area:.1f}")
