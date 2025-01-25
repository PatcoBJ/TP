#ifndef INTERFACE_H
#define INTERFACE_H

typedef struct {
    char nom[50];
    char prenom[50];
    char matricule[20];
    float notes[5];
    float moyenne;
} Etudiant;

void saisir_etudiant(Etudiant *etudiant);
void afficher_etudiant(const Etudiant *etudiant);
void calculer_moyenne(Etudiant *etudiant);

#endif

