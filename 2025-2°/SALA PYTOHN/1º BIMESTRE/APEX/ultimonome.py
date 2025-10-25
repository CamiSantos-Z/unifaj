nomes = []
for i in range(6):
    nome = input(f"Digite o {i+1}º nome: ")
    nomes.append(nome)

print("Primeiro nome digitado:", nomes[0])
print("Último nome digitado:", nomes[-1])
