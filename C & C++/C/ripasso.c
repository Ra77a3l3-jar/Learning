#include <stdio.h>

int main()
{
    int eta1 = 0;
    int eta2 = 0;
    int eta3 = 0;
    float voto1 = 0.0;
    float voto2 = 0.0;
    float voto3 = 0.0;

    printf("\n inserisci eta 1: ");
    scanf("%i", &eta1);

    printf("\n inserisci eta 2: ");
    scanf("%i", &eta2);

    printf("\n inserisci eta 3: ");
    scanf("%i", &eta3);

    printf("\n inserisci voto 1: ");
    scanf("%f", &voto1);

    printf("\n inserisci voto 2: ");
    scanf("%f", &voto2);

    printf("\n inserisci voto 3: ");
    scanf("%f", &voto3);

    int numVotoSuffEMagg = 0;

    if (voto1 >= 6 && eta1 >= 18) 
    { 
        numVotoSuffEMagg++; 
    }
    if (voto2 >= 6 && eta2 >= 18) 
    {
        numVotoSuffEMagg++;
    }
    if (voto3 >= 6 && eta3 >= 18) 
    {
        numVotoSuffEMagg++;
    }
    
    if (((voto1 >= 6 && eta1 >= 18)  && (voto2 >= 6 && eta2 >= 18)) ||
        ((voto1 >= 6 && eta1 >= 18)  && (voto3 >= 6 && eta3 >= 18)) ||
        ((voto2 >= 6 && eta2 >= 18)  && (voto3 >= 6 && eta3 >= 18))) 
    {
        printf("\n almeno 2 sono maggiorenni e sufficienti");
    }
}