numeros = []

for i in range(10):
    numeros.append(int(input(f"Digite o {i+1}º número: ")))

soma_pares = 0
produto_impar = 1

for n in numeros:
    if n % 2 == 0:
        soma_pares += n
    else:
        produto_impar *= n

media = sum(numeros) / len(numeros)

print(soma_pares)
print(produto_impar)
print(media)

