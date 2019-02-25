//
//  main.c
//  monprogramme
//
//  Created by PixelNew on 05/10/2018.
//  Copyright © 2018 PixelNew. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>

const int AGE_LEGAL = 18;
int age = 0; // On initialise la variable à 0

int main(int argc, const char * argv[]) {
    printf("Hello, World!\n");
    printf("Quel age avez-vous ? ");
    scanf("%d", &age); // On demande d'entrer l'âge avec scanf
    printf("Ah ! Vous avez donc %d ans !\n\n", age);
    printf("L'âge légal est de %d.", AGE_LEGAL);
    
    return 0;
}
