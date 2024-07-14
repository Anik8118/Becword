import math

A, B, C = map(float, input().split())

print(f"TRIANGULO: {((A * C) / 2):.3f}")
print(f"CIRCULO: {((math.pi * C * C)):.3f}")
print(f"TRAPEZIO: {(((A + B) / 2) * C):.3f}")
print(f"QUADRADO: {(B * B):.3f}")
print(f"RETANGULO: {(A * B):.3f}")
