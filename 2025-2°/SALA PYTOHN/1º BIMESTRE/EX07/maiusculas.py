frase = input('Digite uma frase: ')

letras_maiusculas = ' '
for letra in frase:
    if letra.isupper():
        letras_maiusculas += letra

print('Letras maiuculas: ', letras_maiusculas)
