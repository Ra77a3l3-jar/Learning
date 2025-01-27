voto = 0
votoMax = 0
votoMin = 11

for i in range(0, 5):
    voto = int(input("Inserisci il voto: "))

    if voto > votoMax:
        votoMax = voto
    if voto < votoMin:
        votoMin = voto

print(f"Il voto minore è: {votoMin}")
print(f"Il voto maggiore è: {votoMax}")