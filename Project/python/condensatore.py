def dati():
    vGeneratore = float(input("Inserisci la tensione del generatore: "))
    capacita = float(input("Inserisci la capacita del condensatore: "))
    resistenza = float(input("Inserisci la resistenza del resistore: "))
    intervalloT = int(input("Inserisci l'intervallo di tempo (in secondi interi): "))
    tempoSimu = int(input("Inserisci la durata della simulazione (in secondi interi): "))

    return vGeneratore, capacita, resistenza, intervalloT, tempoSimu

def caricamento (vGeneratore, capacita, resistenza,intervalloT, tempoSimu):

    dQ = 0.0    # delta Quantita di Carica
    q = 0.0     # Quantita di Carica
    nQ = 0.0    # nuova Quantita di Carica
    intensita = 0.0     # Intensita del circuito
    vCondensatore = 0.0     # Tensione del Condensatore

    for i in range (0, tempoSimu, intervalloT):
        if (vCondensatore == 0.0):
            vCondensatore = vGeneratore
            intensita = vCondensatore / resistenza
            q = vCondensatore * capacita
            dQ = intensita * intervalloT

            print (f"Il condensatore e stato caricato a pieno nel secondo {i}")
        else:
            nQ = q - dQ
            q = nQ
            vCondensatore = nQ / capacita
            intensita = vCondensatore / resistenza
            dQ = intensita * intervalloT

            print (f"La tensione del condensatore al secondo {i} e di : {vCondensatore}")

    return vCondensatore

def main():
    vGeneratore, capacita, resistenza, intervalloT, tempoSimu = dati()
    vCondensatore = caricamento(vGeneratore, capacita, resistenza, intervalloT, tempoSimu) 

if __name__ == "__main__":
    main()
