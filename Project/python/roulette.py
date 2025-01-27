import random

def gira_roulette():
    return random.choice(list(range(37)) + ["00"])  # Numeri 0-36 e "00"

def mostra_roulette():
    print("""
-----------------------------------
|  0  | 28 | 9  | 26 | 30 | 11 | 7 |
| 32  | 17 | 5  | 22 | 34 | 15 | 3 |
| 36  | 13 | 1  | 00 | 27 | 10 | 25|
| 29  | 12 | 8  | 19 | 31 | 18 | 6 |
| 21  | 33 | 16 | 4  | 23 | 35 | 14|
-----------------------------------
""")

def main():
    saldo = 100
    print("Benvenuto alla Texas Roulette!")
    
    while saldo > 0:
        mostra_roulette()
        print(f"Saldo: ${saldo}")
        try:
            puntata = float(input("Puntata: $"))
            numero = input("Numero (0-36 o '00'): ")
            if puntata <= 0 or puntata > saldo or (numero != "00" and not 0 <= int(numero) <= 36):
                raise ValueError
        except ValueError:
            print("Inserimento non valido. Riprova.")
            continue

        risultato = gira_roulette()
        print(f"La roulette gira... Risultato: {risultato}")

        if numero == str(risultato):
            vincita = puntata * 35
            print(f"Hai vinto ${vincita:.2f}!")
            saldo += vincita
        else:
            print("Hai perso!")
            saldo -= puntata

        if saldo > 0 and input("Giocare ancora? (s/n): ").strip().lower() != 's':
            break

    print("Game Over! Grazie per aver giocato!")

if __name__ == "__main__":
    main()