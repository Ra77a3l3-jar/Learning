num = 0

risposta = True

numSuperiore = 0
numInferiore = 0
num26 = 0
numTotali = 0

while risposta:
    num = int(input("Inserisci un numero: "))
    numTotali += 1

    if num == 26:
        num26 += 1
    elif num > 26:
        numSuperiore += 1
    else:
        numInferiore += 1

    risposta_input = input("Vuoi continuare? (s/n) ")

    if risposta_input != "s" and risposta_input != "n":
        print("Risposta non valida. Prosegui con 's' o 'n'")
        risposta_input = input("Vuoi continuare? (s/n) ")
    
    if risposta_input == "n":
        risposta = False
    elif risposta_input == "s":
        risposta = True
    

print(f"Ho inserito {numTotali} numeri")
print(f"Ho inserito {num26} volte il numero 26")
print(f"Ho inserito {numSuperiore} numeri superiori a 26")
print(f"Ho inserito {numInferiore} numeri inferiori a 26")