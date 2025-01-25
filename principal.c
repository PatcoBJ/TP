#include <stdio.h>
#include <stdlib.h>
#include "interface.h"

void afficher_menu() {
    printf("\n===== MENU PRINCIPAL =====\n");
    printf("1. Saisir un étudiant\n");
    printf("2. Afficher les informations de l'étudiant\n");
    printf("3. Quitter\n");
    printf("==========================\n");
    printf("Entrez votre choix : ");
}

int main() {
    Etudiant etudiant;
    int choix;
    int etudiant_saisi = 0; // Indique si les informations de l'étudiant ont été saisies

    do {
        afficher_menu();
        scanf("%d", &choix);

        switch (choix) {
            case 1:
                saisir_etudiant(&etudiant);
                calculer_moyenne(&etudiant);
                etudiant_saisi = 1;
                printf("\nÉtudiant saisi avec succès !\n");
                break;

            case 2:
                if (etudiant_saisi) {
                    afficher_etudiant(&etudiant);
                } else {
                    printf("\nAucun étudiant saisi. Veuillez d'abord saisir les informations d'un étudiant.\n");
                }
                break;

            case 3:
                printf("\nMerci d'avoir utilisé le programme. Au revoir !\n");
                break;

            default:
                printf("\nChoix invalide. Veuillez réessayer.\n");
                break;
        }
    } while (choix != 3);

    return 0;
}

