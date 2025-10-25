animais = []

animais.append("Cachorro")
animais.append("Gato")
animais.append("Vaca")
animais.append("Piriquito")
animais.append("Porco")

print(animais)

novo_bicho = input("Adicione um novo animal, onde irá substituir o terceiro da lista: ")

animais[2] = novo_bicho

print(animais)