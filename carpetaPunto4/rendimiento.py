import random
import time 

def sumaNumeros(n):
    total = 0
    for i in range(1, n + 1):
        total += i
    return total


n = 3
inicio = time.time()
resultado = sumaNumeros(n)
final=time.time()

print("segundos " ,format(final - inicio))
