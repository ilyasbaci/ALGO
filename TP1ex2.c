#include <stdio.h>

int main() {
    int T[10][10];
    int i , j , save , size;
    printf("enter size of array : ");
    scanf("%d",&size);
    for(i = 0 ; i < size ; i++){
        for(j = 0 ; j < size ; j++){
         printf("enter T[%d][%d] : ",i,j);
         scanf("%d",&T[i][j]);
        }
    }
    printf("original array :\n\n");
    for(i = 0 ; i < size ; i++){
        for(j = 0 ; j < size ; j++){
         printf("\t%d\t|",T[i][j]);
        }
        printf("\n\n");
    }
    for(i = 1 ; i < size ; i++){
        for(j = 0 ; j < i ; j++){
         save = T[i][j];
         T[i][j] = T[j][i];
         T[j][i] = save;
        }
    }
    printf("reversed array :\n\n");
    for(i = 0 ; i < size ; i++){
        for(j = 0 ; j < size ; j++){
         printf("\t%d\t|",T[i][j]);
        }
        printf("\n\n");
    }
    
    return 0;
}
