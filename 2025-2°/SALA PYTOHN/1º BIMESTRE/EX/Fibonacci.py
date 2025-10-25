limite = int(input("Digite um numero limite para sequencia da fibonacci: "))
a = 0
b = 1

print("Sequencia de Fibonnaci até",limite,":")
while a <= limite:
    print(a, end=" ")
    a,b = b, a + b
print("Fim do Fibonnacci")


