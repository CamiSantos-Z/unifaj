minimo = int(input("Digite o valor minimo do intervalo: "))
maximo = int(input("Digite o valor maximo do intervalo: "))

pares = 0
impares = 0

if minimo > maximo:
    print("Erro: o valor minimo deve ser maior ou igual ao maximo")
else:
    for numero in range (minimo, maximo +1):
        if numero %2 == 0:
            pares += 1 
        else:
            impares +=1

print("Quantidade de numeros pares", pares)
print("Quantidade de numeros impares", impares)
