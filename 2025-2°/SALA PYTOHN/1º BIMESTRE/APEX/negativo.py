numeros = []
for i in range(10):
    numero = int(input(f"Digite o {i+1}º número: "))
    numeros.append(numero)

negativos = [n for n in numeros if n < 0]
quantidade = len(negativos)

print(f"{quantidade}")
