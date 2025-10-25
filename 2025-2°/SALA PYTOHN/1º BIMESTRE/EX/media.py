def calcular_media(lista):
    return sum(lista) / len(lista)

numeros = []

print("Digite os números para calcular a média.")
print("Quando quiser parar, digite 'stop' no mesmo instante será calculado a medía.")

while True:
    entrada = input("Digite um número ou 'fim': ")
    
    if entrada.lower() == "fim":
        break
    
    try:
        numero = float(entrada)
        numeros.append(numero)
    except ValueError:
        print("Entrada inválida. Digite apenas números ou 'fim'.")

# Verifica se a lista tem pelo menos um número
if len(numeros) > 0:
    media = calcular_media(numeros)
    print("A média dos números é:", media)
else:
    print("Nenhum número foi digitado. Não é possível calcular a média.")