notes = int(input())
print(notes)

print(f"{notes // 100} nota(s) de R$ 100,00")
amount = notes % 100

print(f"{amount // 50} nota(s) de R$ 50,00")
amount %= 50

print(f"{amount // 20} nota(s) de R$ 20,00")
amount %= 20

print(f"{amount // 10} nota(s) de R$ 10,00")
amount %= 10

print(f"{amount // 5} nota(s) de R$ 5,00")
amount %= 5

print(f"{amount // 2} nota(s) de R$ 2,00")
amount %= 2

print(f"{amount // 1} nota(s) de R$ 1,00")
