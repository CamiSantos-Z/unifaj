def lista_pares(n):
    if n < 0:
        return []
    return[i for i in range(0, n + 1) if  i % 2 ==0]

numero = int(input("Digite um número inteiro positivo: "))
print(lista_pares(10))

