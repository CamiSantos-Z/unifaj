nomes = ['Ruby','Weiss','Yang','Black','Nepturne']

def maiorNome():
    return max(nomes, key=len)
print(maiorNome())