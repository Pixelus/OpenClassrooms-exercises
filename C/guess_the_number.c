//
//  main.c
//  guess_the_number
//
//  Created by PixelNew on 15/10/2018.
//  Copyright © 2018 PixelNew. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, const char * argv[]) {
    int nombreMystere, nombreDonne;
    const int MAX = 100, MIN = 1;

    srand(time(NULL));
    nombreMystere = (rand() % (MAX - MIN + 1)) + MIN;
    
    do {
        printf("Quel est le nombre ? ");
        scanf("%d", &nombreDonne);
        printf("\n");
        if(nombreDonne > nombreMystere){
            printf("C'est moins !\n");
        }
        else if (nombreDonne < nombreMystere) {
            printf("C'est plus !\n");
        }
        else {
            printf("Bravo, vous avez trouvé le nombre mystère !!!");
        }
    }
    while(nombreDonne != nombreMystere);
    printf("\n");
    return 0;
}
