palavra1 = input("Digite a primeira palavra: ")
palavra2 = input("Digite a segunda palavra: ")

if sorted(palavra1) == sorted(palavra2):
    print("São anagramas!")
else:
    print("Não são anagramas.")