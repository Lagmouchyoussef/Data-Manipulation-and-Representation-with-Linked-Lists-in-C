#include <stdio.h>
#include <stdlib.h>

typedef struct ens {
    int nombre;
    struct ens *suiv;
} ensembleListe;

ensembleListe *p = NULL;

void inserer(int val) {
    ensembleListe *nouveau = (ensembleListe*)malloc(sizeof(ensembleListe));
    nouveau->nombre = val;
    nouveau->suiv = NULL;

    if (p == NULL || val < p->nombre) {
        nouveau->suiv = p;
        p = nouveau;
        return;
    }

    ensembleListe *courant = p;
    while (courant->suiv != NULL && courant->suiv->nombre < val) {
        courant = courant->suiv;
    }

    nouveau->suiv = courant->suiv;
    courant->suiv = nouveau;
}

void afficherListe() {
    ensembleListe *courant = p;
    while (courant != NULL) {
        printf("%d -> ", courant->nombre);
        courant = courant->suiv;
    }
    printf("NULL\n");
}

int main() {
    inserer(2);
    inserer(3);
    inserer(5);
    inserer(7);
    inserer(9);
    inserer(12);
    inserer(98);

    printf("Initial list: ");
    afficherListe();

    inserer(8);
    printf("List after inserting 8: ");
    afficherListe();

    return 0;
}