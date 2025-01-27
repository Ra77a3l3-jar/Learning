N = int(input("Inserisci il valore di N: "))

voto = 0;
continua = True
somma = 0
numVoti = 0

while continua:
    voto = int(input("Inserisci il voto: "))

    somma += voto
    numVoti += 1

    if somma >= N:
        continua = False

print(f"Numero totale di voti: {numVoti}")
print(f"Somma totale dei voti: {somma}")
