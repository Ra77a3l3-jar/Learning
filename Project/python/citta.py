def main():
    num_citta = 0
    abitanti_totali = 0

    citta_max = ""
    abitanti_max = 0

    abitanti_5k = True
    madrid = False
    parigi = False

    tentativi = 0

    while tentativi < 10:
        citta = input("Inserisci la citta: ")

        if citta == "Oslo":
            break

        abitanti = int(input("Inserisci il numero di abitanti: "))

        abitanti_totali += abitanti
        num_citta += 1

        if abitanti > abitanti_max:
            abitanti_max = abitanti
            citta_max = citta

        if citta == "Madrid":
            madrid = True
        if citta == "Parigi":
            parigi = True

        if abitanti <= 5000:
            abitanti_5k = False

        tentativi += 1

    if num_citta > 0:
        abitanti_media = abitanti_totali / num_citta
        print(f"Media abitanti: {abitanti_media}")
        print(f"Città con più abitanti: {citta_max} con {abitanti_max} abitanti.")
        print(f"Città Madrid presente: {'Sì' if madrid else 'No'}")
        print(f"Città Parigi presente: {'Sì' if parigi else 'No'}")
        print(f"Tutte le città hanno più di 5000 abitanti: {'Sì' if abitanti_5k else 'No'}")
    else:
        print("Nessuna città inserita.")

if __name__ == "__main__":
    main()