palavra = input('Digite uma plavra: ')

palavra_invertida = palavra[::-1]

if palavra == palavra_invertida:
    print(' É palíndromo ')
else:
    print(' Não é palíndromo ')