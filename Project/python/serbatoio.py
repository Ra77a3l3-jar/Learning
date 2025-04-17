import math

def RichiestaDati ():
    altezza = float(input("Inserisci altezza del serbatoio: "))
    livello = float(input("Inserisci il ivello del liquido: "))
    areaS = float(input("Inserisci l'area del serbatoio: "))
    areaV = float(input("Inserisci l'area della valvola: "))
    intervalloT = int(input("Inserisci l'intervallo di tempo: "))
    tempoSimulazione = int(input("Inserisci la durata della simulazione: "))
    portataIn = float(input("Inserisci quanta acqua fa entrare la valvola: "))

    return altezza, livello, areaS, areaV, intervalloT, tempoSimulazione, portataIn

def Portata (altezza, livello, areaS, areaV, intervalloT, tempoSimulazione, portataIn):
    scarico = True

    for i in range(0, tempoSimulazione, intervalloT):
        if scarico:
            portata = areaV * math.sqrt(2 * 9.81 * livello)
            rilascio = portata * intervalloT
            variazioneLivello = rilascio / areaS

            if livello > variazioneLivello:
                livello -= variazioneLivello
            else:
                livello = 0.0
                scarico = False
                print (f"Il serbatoio e vuoto al secondo {i}")
        else:
            Riempimento = portataIn * intervalloT
            variazioneLivello = Riempimento / areaS
            livello += variazioneLivello

            if livello >= altezza:
                livello = altezza
                scarico = True
                print (f"Il serbatoio e` pieno al secondo {i}")

        print (f"Il livello del serbatoio al secondo {i} e di : {livello}")

    return livello

def main ():
    altezza, livello, areaS, areaV, intervalloT, tempoSimulazione, portataIn = RichiestaDati()
    livello = Portata(altezza, livello, areaS, areaV, intervalloT, tempoSimulazione, portataIn)

if __name__ == "__main__":
    main()

