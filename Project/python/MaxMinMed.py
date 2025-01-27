voti = []
num_voti = 5

for i in range(1, num_voti + 1):
    voto = int(input(f"Inserisci il voto {i} (0-10): "))
    voti.append(voto)

votoMin = min(voti)
votoMax = max(voti)

voti.sort()
votoMed = voti[len(voti) // 2]

print(f"Il voto minore è {votoMin}, centrale è {votoMed} e il massimo è {votoMax}.")