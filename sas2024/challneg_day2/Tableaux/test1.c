#include <stdio.h>

int main() {
    int tabl[100];
    int taill;
    int pos;

    // Demande à l'utilisateur le nombre d'éléments
    printf("Entrez le nombre d'éléments : ");
    scanf("%d", &taill);

    // Vérification de la validité de la taille
    if (taill <= 0 || taill > 100) {
        printf("Veuillez entrer un nombre d'éléments valide (1 à 100).\n");
        return 1;
    }

    // Lecture des éléments du tableau
    for (int i = 0; i < taill; i++) {
        printf("Entrez le nombre [%d] : ", i + 1);
        scanf("%d", &tabl[i]);
    }

    // Demande de la position à supprimer
    printf("Entrez la position de l'élément à supprimer (1 à %d) : ", taill);
    scanf("%d", &pos);

    // Vérification de la position
    if (pos <= 0 || pos > taill) {
        printf("Ce nombre n'existe pas à la position %d.\n", pos);
    } else {
        // Déplacement des éléments pour supprimer celui à la position demandée
        for (int h = pos - 1; h < taill - 1; h++) {
            tabl[h] = tabl[h + 1];
        }
        taill--; // Réduire la taille du tableau
    }

    // Affichage du tableau modifié
    printf("Tableau après suppression : ");
    for (int i = 0; i < taill; i++) {
        printf("%d ", tabl[i]);
    }
    printf("\n");

    return 0;
}
