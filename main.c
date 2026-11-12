#include <stdio.h>

int produit(int a, int b) {
    return a * b;
}

int main() {
    int a, b;
    printf("Projet collaboratif\n");
    printf("Svp donnez-moi deux entiers : ");
    scanf("%d %d", &a, &b);
    printf("Le produit de %d et %d est %d\n", a, b, produit(a, b));

    return 0;
}