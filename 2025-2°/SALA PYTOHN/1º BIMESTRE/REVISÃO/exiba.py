nomes = ["Ana", "Bruno", "Carlos", "Daniela", "Eduardo"]

nome_digitado = input("Digite um nome: ")

if nome_digitado in nomes:
    posicao = nomes.index(nome_digitado)
    print(f"O nome '{nome_digitado}' está na posição {posicao}.")
else:
    print(f"O nome '{nome_digitado}' não foi encontrado na lista.")