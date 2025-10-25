numeros = []
for i in range(15):
    numero = int(input(f"Digite o {i+1}º número: "))
    numeros.append(numero)

maiores_que_100 = [n for n in numeros if n > 100]
quantidade = len(maiores_que_100)

print(f"{quantidade}")