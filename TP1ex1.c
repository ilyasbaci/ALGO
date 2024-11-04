#include <stdio.h>

int main() {
    const char* matrice[5][5] = {
        {"1", "2", "3", "4", "5"},
        {"7", "a", "c", "8", "d"},
        {"c", "9", "4", "z", "8"},
        {"5", "6", "p", "n", "3"},
        {"2", "9", "t", "m", "k"}
    };

    printf("Lignes d'indice pair:\n");
    for (int i = 0; i < 5; i += 2) {
        for (int j = 0; j < 5; j++) {
            printf("%s ", matrice[i][j]);
        }
        printf("\n");
    }

    printf("\nÉléments d'indice impair de chaque ligne:\n");
    for (int i = 0; i < 5; i++) {
        for (int j = 1; j < 5; j += 2) {
            printf("%s ", matrice[i][j]);
        }
        printf("\n");
    }

    return 0;
}
