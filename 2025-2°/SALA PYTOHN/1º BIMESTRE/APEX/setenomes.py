nomes = []

for i in range(7):
    nome = input("Digite um nome: ")
    nomes.append(nome)

contagem = 0
for nome in nomes:
    if len(nome) > 6:
        contagem += 1

print(contagem)
