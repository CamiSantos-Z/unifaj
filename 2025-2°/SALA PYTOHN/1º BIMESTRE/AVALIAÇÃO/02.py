def analisa_nomes(nomes):
    if not nomes:
        return None, None, 0
    
    maior = nomes[0]
    menor = nomes[0]
    soma_caracteristica = 0  

    for nome in nomes: 
        tamanho = len(nome)
        soma_caracteristica += tamanho

        if tamanho > len(maior):
            maior = nome
        if tamanho < len(menor):
            menor = nome

    media = soma_caracteristica / len(nomes)
    return maior, menor, media


lista_nomes = ['Camilli', 'Gabriela', 'Isabela', 'Beatriz', 'Flora']
maior, menor, media = analisa_nomes(lista_nomes)

print( maior)
print( menor)
print( media)
