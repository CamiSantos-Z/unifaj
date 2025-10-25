palavra = input("Digite uma palavra: ")

substrings = []

for i in range(len(palavra)):
    for j in range(i + 1, len(palavra) + 1):
        substrings.append(palavra[i:j])

print("Substrings possíveis:")
for s in substrings:
    print(s)