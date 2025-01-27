#include <stdio.h>

int  main() {

    int i = 0;

    for(i =  0; i < 20; i++) {
        if(i % 2 != 0){
           
            continue;
        }

    printf("\n %d", i);

    }

return 0;
}