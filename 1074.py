y = int(input())

for _ in range(y):
    x = int(input())
    if x < 0:
        if x % 2 == 0:
            print("EVEN NEGATIVE")
        else:
            print("ODD NEGATIVE")
    elif x > 0:
        if x % 2 == 0:
            print("EVEN POSITIVE")
        else:
            print("ODD POSITIVE")
    else:
        print("NULL")
