numeros = [45, 150, 89, 200, 101, 77, 300, 99]

quantidade_maiores_que_100 = sum(1 for num in numeros if num > 100)

print(f"Quantidade de números maiores que 100: {quantidade_maiores_que_100}")