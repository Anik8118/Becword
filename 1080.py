max_val = 0
array = [0] * 100

for i in range(100):
    array[i] = int(input())

max_val = array[0]
pos = 1

for i in range(1, 100):
    if max_val < array[i]:
        max_val = array[i]
        pos = i + 1

print(max_val)
print(pos)
