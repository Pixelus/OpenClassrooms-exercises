//
//  main.c
//  calculatrice
//
//  Created by PixelNew on 08/10/2018.
//  Copyright © 2018 PixelNew. All rights reserved.
//

#include <stdio.h>

int firstNb, secondNb, resultat;

int main(int argc, const char * argv[]) {
    // Demander deux nombres à l'utilisateur,
    // Stocker ces deux nombres dans des variables,
    // Faire la somme de ces variables et stocker le résultat dans une variable appelée resultat,
    // Afficher le résultat du calcul à l'écran.
    
    printf("Bienvenue !\n");
    printf("Entrer un nombre : ");
    scanf("%d", &firstNb);
    printf("Entrer un autre nombre : ");
    scanf("%d", &secondNb);
    // Somme des deux nombres
    resultat = firstNb + secondNb;
    printf("La somme des deux nombres est %d.\n", resultat);
    printf("Au revoir !");
    
    return 0;
}
