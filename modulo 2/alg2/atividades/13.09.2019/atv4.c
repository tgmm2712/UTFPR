#include <stdio.h>
#include <stdlib.h>

int main () {
   char mes[12][4] = {"jan", "fev", "mar", "abr","mai", "jun", "jul", "ago", "set", "out","nov", "dez"};
    int x;
    

    scanf("%d",&x);
    for (int i = 0; i < 3; i++)
    {

        printf("%c",mes[x-1][i]);
    }
    printf("\n");
    
}