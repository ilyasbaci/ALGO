#include<stdio.h>
#include<string.h>
#include<stdlib.h> 
char * Charger Chaine(int N);
int Longueur (chat *ch);
void InverserTab(char Tab , chat T , int m);
void ChargerTab(char *p, char Tab ); 
void AfficherTab(char Tab , int m);
int main (){
Char *ch; int n; printf(" veuillez saisir la taille maximale de la chaine : \n");
scanf("%d",&n); ch=ChargerChaine(n);
int m=Longueur(ch);
char Tab[m], T[m];
ChargerTab(ch,Tab);
AfficherTab(Tab,m);
InverserTab(Tab,T,m);
AfficherTab(T,m);
free(ch);
return 0;
}