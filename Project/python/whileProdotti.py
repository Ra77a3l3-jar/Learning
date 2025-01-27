costoProdotto = 0
budget = 100
prodottiAcquistati = 0

while True:
    costoProdotto = int(input("Inserisci costo prodotto: "))

    if costoProdotto > budget:
        print("Non hai abbastanza budget per acquistare questo prodotto")
        break
    else:
        budget -= costoProdotto
        prodottiAcquistati += 1
        print(f"Prodotto acquistato! Budget rimanente: {budget}")

    if budget == 0:
        break

print(f"Hai acquistato {prodottiAcquistati} prodotti")