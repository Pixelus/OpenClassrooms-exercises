//
//  main.c
//  nombreMystere
//
//  Created by PixelNew on 15/10/2018.
//  Copyright © 2018 PixelNew. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char** argv)
{
    int nombreMystere = 0, nombreEntre = 0, niveau_difficulte = 0, compteur = 0, continuerPartie = 1, nombreMaximum = 10000;
    const int MIN = 1;
    
    // // La boucle du programme. Elle se répète tant que l'utilisateur n'a pas trouvé le nombre mystère
    while(continuerPartie == 1) {
        
        // Affichage du menu
        printf("\n*** Bienvenue dans le jeu du Nombre Mystère ***\n\n");
        printf("vous devez deviner quel est le nombre mystère.\n\n");
        printf("----- NIVEAU DE DIFFICULTE -----\n\n");
        printf("NIVEAU 1 = nombre mystère entre 1 et 100\n");
        printf("NIVEAU 2 = nombre mystère entre 1 et 1 000\n");
        printf("NIVEAU 3 = nombre mystère entre 1 et 10 000\n");
        printf("\nEntrez le numéro du niveau souhaité : ");
        scanf("%d", &niveau_difficulte);
        
        // On adapte le nombre maximum selon la difficulté choisie
        if(niveau_difficulte == 1) {
            nombreMaximum = 100;
        } else if (niveau_difficulte == 2) {
            nombreMaximum = 1000;
        }
        
        // Génération du nombre aléatoire
        srand((int) time(NULL));
        nombreMystere = (rand() % (nombreMaximum - MIN + 1)) + MIN;
        // La boucle de la partie en cours
        do
        {
            // On demande le nombre
            printf("\nQuel est le nombre ? ");
            compteur++;
            scanf("%d", &nombreEntre);
            
            // On compare le nombre entré avec le nombre mystère
            if (nombreMystere > nombreEntre)
                printf("C'est plus !\n");
            else if (nombreMystere < nombreEntre)
                printf("C'est moins !\n");
            else
                printf ("\nBravo, vous avez trouvé le nombre mystère en %d coups.\n", compteur);
        } while(nombreEntre != nombreMystere);
        
        // On demande au joueur s'il veut rejouer
        printf("Entrez 1 pour faire une autre partie ou 0 pour quitter le jeu : ");
        scanf("%d", &continuerPartie);
    }
    
    // On quitte le jeu
    printf("\nMerci d'avoir jouer.\n");
    
    return 0;
}
