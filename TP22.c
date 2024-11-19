#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char* ChargerChaine(int N);
int Longueur(char* ch);
void InverserTab(char Tab[], char T[], int m);
void ChargerTab(char* p, char Tab[]);
void AfficherTab(char Tab[]);

int main() {
    char* ch;
    int n;

    printf("Veuillez saisir la taille maximale de la chaine :\n");
    scanf("%d", &n);

    ch = ChargerChaine(n);
    int m = Longueur(ch);

    char Tab[m + 1], T[m + 1];
    ChargerTab(ch, Tab);
    AfficherTab(Tab);
    InverserTab(Tab, T, m);
    AfficherTab(T);

    free(ch);
    return 0;
}

char* ChargerChaine(int N) {
    char* chaine = (char*)malloc((N + 1) * sizeof(char));
    if (chaine == NULL) {
        printf("Erreur d'allocation de memoire.\n");
        exit(1);
    }
    printf("Entrez la chaine: ");
    scanf("%s", chaine);
    return chaine;
}

int Longueur(char* ch) {
    return strlen(ch);
}

void InverserTab(char Tab[], char T[], int m) {
    for (int i = 0; i < m; i++) {
        T[i] = Tab[m - i - 1];
    }
    T[m] = '\0';
}

void ChargerTab(char* p, char Tab[]) {
    strcpy(Tab, p);
}

void AfficherTab(char Tab[]) {
    printf("%s\n", Tab);
}