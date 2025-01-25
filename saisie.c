#include <stdio.h>
#include "interface.h"

void saisir_etudiant(Etudiant *etudiant) {
    printf("Saisie des informations de l'étudiant\n");
    printf("Nom : ");
    scanf("%49s", etudiant->nom);

    printf("Prénom : ");
    scanf("%49s", etudiant->prenom);

    printf("Matricule : ");
    scanf("%19s", etudiant->matricule);

    printf("Entrez les 5 notes de l'étudiant :\n");
    for (int i = 0; i < 5; i++) {
        printf("Note %d : ", i + 1);
        scanf("%f", &etudiant->notes[i]);
    }
}

