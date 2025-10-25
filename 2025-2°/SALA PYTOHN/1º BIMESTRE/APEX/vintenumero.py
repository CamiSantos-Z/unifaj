numeros = [5, 12, 8, 3, 7, 14, 9, 21, 6, 10, 4, 18, 11, 2, 17, 13, 19, 1, 16, 20]

numeros_posicao_par = [numeros[i] for i in range(len(numeros)) if i % 2 == 0]
print(numeros_posicao_par)
