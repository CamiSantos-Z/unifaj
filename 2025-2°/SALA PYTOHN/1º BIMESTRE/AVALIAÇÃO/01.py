import random

numeros = []
for _ in range(15):
    numeros.append(random.randint(1,200))

filtrados = []
for n in numeros:
    if n % 4 == 0 and n > 50:
        filtrados.append(n)

soma = 0
for n in filtrados:
    soma += n

print(numeros)
print(filtrados)
print(soma)