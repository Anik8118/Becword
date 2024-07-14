a, b, c = map(int, input().split())

MaiorAB = (a + b + abs(a - b)) // 2
max_value = (MaiorAB + c + abs(MaiorAB - c)) // 2

print(f"{max_value} eh o maior")
