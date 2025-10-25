idades = []
for i in range(5):
    idade = int(input(f"Digite a {i+1}ª idade: "))
    idades.append(idade)

Media = sum(idades) / len(idades)


print(f"{Media:.2f}")


