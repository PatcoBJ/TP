#include "interface.h"

void calculer_moyenne(Etudiant *etudiant) {
    float somme = 0;
    for (int i = 0; i < 5; i++) {
        somme += etudiant->notes[i];
    }
    etudiant->moyenne = somme / 5;
}

