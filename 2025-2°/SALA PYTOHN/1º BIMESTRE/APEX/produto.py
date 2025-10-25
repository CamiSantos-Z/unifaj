numeros = []
for i in range(6):
    numero = int(input(f"Digite o {i+1}º número: "))
    numeros.append(numero)

produto = 1
for n in numeros:
    produto *= n

print(f"{produto}")
