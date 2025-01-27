Voti = []

for i in range(5):
    voto = int(input("Inserisci il voto: "))
    Voti.append(voto)

max = Voti[0]
min = Voti[0]

for voto in Voti:
    if voto > max:
        max = voto
    if voto < min:
        min = voto

print("Il voto massimo e: ", max)
print("Il voto minimo e: ", min)
