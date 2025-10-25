numeros = []
for i in range(10):
    numero = int(input(f"Digite o {i+1}º número: "))
    numeros.append(numero)

multiplos_de_3 = [n for n in numeros if n % 3 == 0]

print(multiplos_de_3)
