frase = input('Digite a frase: ')

palavras = frase.split()
acronomio = ' '

for palavra in palavras:
    acronimo += palavra[0].upper()

print('Acronimo',acronimo)