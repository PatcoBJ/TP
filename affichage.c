#include <stdio.h>
#include "interface.h"

void afficher_etudiant(const Etudiant *etudiant) {
    printf("\nInformations de l'étudiant\n");
    printf("Nom : %s\n", etudiant->nom);
    printf("Prénom : %s\n", etudiant->prenom);
    printf("Matricule : %s\n", etudiant->matricule);
    printf("Notes : ");
    for (int i = 0; i < 5; i++) {
        printf("%.2f ", etudiant->notes[i]);
    }
    printf("\nMoyenne : %.2f\n", etudiant->moyenne);
}

