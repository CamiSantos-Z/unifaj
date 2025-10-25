numeros = [12,56,43,657,32,244,87,11,22,90,15,24]

pares = []
quadrados = []

for i in range(len(numeros)):
    if i % 2 == 0:
        pares.append(numeros[i])

for n in pares:
    quadrados.append(n**2)

print("Minha Lista:     ",numeros)
print("Meus pares:      ",pares)
print("Meus quadrados:  ",quadrados)