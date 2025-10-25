nome = ['Camilli','Isabella','Gabriela','Beatriz']
quantidade = int(input('Quantos nomes deseja adicionar?: '))

for i in range(quantidade):
    novo_nome = input('Digite o nome: ')
    nome.append(novo_nome)

total = len(nome)

print('Foram adicionados',total,'nome na lista')

