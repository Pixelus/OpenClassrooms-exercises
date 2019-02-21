//
//  main.c
//  menu
//
//  Created by PixelNew on 09/10/2018.
//  Copyright © 2018 PixelNew. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int choixMenu = 0;
    
    // Création d'un menu de restaurant
    printf("=== Menu ===\n");
    printf("1. Royal Cheese\n");
    printf("2. Mc Deluxe\n");
    printf("3. Mc bacon\n");
    printf("4. Big Mac\n");
    printf("Votre choix ? \n");
    scanf("%d", &choixMenu);
    
    switch (choixMenu)
    {
        case 1:
            printf("Tu as choisi le menu Royal Cheese.");
            break;
        case 2:
            printf("Tu as choisi le menu Mc Deluxe.");
            break;
        case 3:
            printf("Tu as choisi le menu Mc Bacon.");
            break;
        case 4:
            printf("Tu as choisi le menu Big Mac.");
            break;
        default:
            printf("Choisir un nombre entre 1 et 4.");
            break;
    }
    
    return 0;
}
