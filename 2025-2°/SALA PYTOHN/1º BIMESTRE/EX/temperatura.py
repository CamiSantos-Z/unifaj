def temperatura(celsius):
    fahrenheit = (celsius * 9/5) + 32 
    return fahrenheit


celsius = float(input("Digite a temperatura: "))

fahrenheit = temperatura(celsius)

print(f"{fahrenheit}")