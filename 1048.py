a = float(input())

if a > 0 and a <= 400.00:
    new_salary = a + (a * 0.15)
    raise_amount = a * 0.15
    percentage = 15
elif a > 400.00 and a <= 800.00:
    new_salary = a + (a * 0.12)
    raise_amount = a * 0.12
    percentage = 12
elif a > 800.00 and a <= 1200.00:
    new_salary = a + (a * 0.10)
    raise_amount = a * 0.10
    percentage = 10
elif a > 1200.00 and a <= 2000.00:
    new_salary = a + (a * 0.07)
    raise_amount = a * 0.07
    percentage = 7
else:
    new_salary = a + (a * 0.04)
    raise_amount = a * 0.04
    percentage = 4

print(f"Novo salario: {new_salary:.2f}")
print(f"Reajuste ganho: {raise_amount:.2f}")
print(f"Em percentual: {percentage} %")
