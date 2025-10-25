nome_completo = input ('Digite seu nome completo: ')

partes = nome_completo.split()

primeiro_nome = partes [0]
ultimo_sobrenome = partes [-1]

print(ultimo_sobrenome + ' ' + primeiro_nome)