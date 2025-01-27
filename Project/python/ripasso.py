b = "Hello, World!"
print(b[:5])            #stampa solo caratteri dalla posizione iniziale alla 5

b = "Hello, World!"
print(b[2:])            #stampa solo caratteri dal 2 all ultimo

b = "Hello, World!"
print(b[-5:-2])         #stampa tra il 5° carattere da destra(d) e il 2° da sinistra(o)

a = "Hello, World!"
print(a.upper())        # fa tutto in maiuscolo

a = "Hello, World!"
print(a.lower())        # fa tutto in minuscolo

a = " Hello, World! "
print(a.strip())        # rimuove gli spazi al inzio e fine

a = "Hello"
b = "World"
c = a + b
print(c)                # unisce le stringhe

a = "Hello"
b = "World"
c = a + " " + b
print(c)                # aggiunge uno spazio tra ""

age = 36
txt = f"My name is John, I am {age}"
print(txt)                                      # stampa il testo con l'età

price = 59
txt = f"The price is {price:.2f} dollars"
print(txt)                                      # stampa il prezzo con due decimali

txt = f"The price is {20 * 59} dollars"
print(txt)                                      # stampa eseguendo l'operazione

"\'" 	"Single Quote" 	
"\\" 	"Backslash"
"\n" 	"New Line" 	
"\r"	"Carriage Return" 	
"\t" 	"Tab" 	
"\b" 	"Backspace" 	
"\f"	"Form Feed" 	
"\ooo" 	"Octal value" 	
"\xhh" 	"Hex value"

thislist = ["apple", "banana", "cherry"]         # lista

thislist = ["apple", "banana", "cherry"]         # numero oggetti nella lista
print(len(thislist))

thislist = ["apple", "banana", "cherry"]
print(thislist[1])                               # stampa secondo oggetto

thislist = ["apple", "banana", "cherry"]
print(thislist[-1])                              # stampa ultimo oggetto       # -2 stampa penultimo oggetto

thislist = ["apple", "banana", "cherry", "orange", "kiwi", "melon", "mango"]
print(thislist[2:5])                                                                     # stampa tra 2 e 5, 2 non compreso

thislist = ["apple", "banana", "cherry"]
if "apple" in thislist:
  print("Yes, 'apple' is in the fruits list")   # se c'e un oggetto in una lista