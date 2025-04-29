# Oggetto Relazione

Questo progetto aveva come scopo visualizzare nel tempo il livello di un serbatoio(h) di area As. Il sistema comprende una valvola di scarico alla base con sezione di area Av e una valvola di ingresso con portata nota. L'analisi permette di studiare il comportamento dinamico del sistema durante le fasi di riempimento e svuotamento.

# Teoria

Per calcolare la variazione del livello del nostro liquido ideale nel tempo di simulazione è necessario definire l'intervallo di tempo in cui aggiornare il livello del liquido. Per calcolare la portata ho usato la formula:
Q = Av × v
In questo modo ho preso in considerazione anche la pressione della colonna d'acqua e la pressione atmosferica a cui è sottoposta l'acqua alla base del serbatoio, e che variano con il livello del liquido:
P = Pat + ρ × g × livelloLiquid
Per ogni intervallo temporale, il volume di liquido scaricato è:
rilascio = portata × intervalloTemp
La variazione di livello dovuta all'afflusso in entrata è calcolata come:
Riempimento = areaValvolaInp × intervalloTemp
variazioneLivello = Riempimento / areaS
La variazione netta del livello nel serbatoio durante l'intervallo risulta quindi:
variazioneLivello = (Riempimento / areaS) - (rilascio / areaS)

# Implementazione dell'algoritmo

L'algoritmo e stato implementato in c++ con l'utilizzo di due funzioni, una ***RichiestaDati*** che chiedeva al utente di inserire i parametri per la simulazione e ***PortataOut** che aveva come compito calcolare la variazione del livello del acqua nel serbatoio. Per simulare l'andamento del tempo ho usato un ciclo for che aveva come parametri l'intervallo di tempo e il tempo totale della simulazione, l'algoritmo parte da una condizione che deve scaricare dove fino a quando la variazione di Livello e minore del livello del liquido l'algoritmo cerchera di scaricare in caso contrario incomicera a riempire il serbatoio fino a quando non e` pieno per poi ricominciare a scaricare.

# Risultati

