def filtra_cidades(cidades):

    resultado = []

    for cidade in cidades:
        if cidade.startswith('S') or cidade.startswith('P'):
            resultado.append(cidade)
    resultado.sort()
    return resultado

lista_cidades = ['São Paulo', 'Rio de Janeiro', 'Porto Alegre', 'Belo Horizonte', 'Salvador', 'Curitiba']
cidades_filtradas = filtra_cidades(lista_cidades)

print(lista_cidades)
print("Quantidade de cidades:", len(cidades_filtradas))
print("Cidades filtradas:", cidades_filtradas)
