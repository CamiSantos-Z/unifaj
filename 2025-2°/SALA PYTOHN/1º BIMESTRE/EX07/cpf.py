cpf = input("Digite seu CPF (formato 000.000.000-00): ")

if len(cpf) == 14:
    print("CPF com formato válido!")
else:
    print("CPF inválido. Deve ter exatamente 14 caracteres.")