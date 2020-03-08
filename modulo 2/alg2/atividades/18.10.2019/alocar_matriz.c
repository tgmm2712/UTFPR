#include <stdio.h>
#include <stdlib.h>

int** aloca_matriz(int l, int c) {
   int **vet = ((int **)malloc(sizeof(int*) * l));
   for (int  i = 0; i < l; i++)
   {
       vet[i]= (int*)malloc(c * sizeof(int));
   }
   



    return(vet);
}

/* Código para teste */

int main() {
    int l, c, i, j, **p;

    while(1) {
        scanf("%d %d", &l, &c);
        if (l <= 0 || c <= 0)
            break;
            
        p = aloca_matriz(l, c);
        
        for (i = 0; i < l; i++) {
            for (j = 0; j < c; j++) {
                p[i][j] = (1 << i) + ((1 << 30) >> j);
            }
        }
        
        for (i = 0; i < l; i++) {
            for (j = 0; j < c; j++) {
                if (j) {
                    printf(", %i", p[i][j]);
                } else {
                    printf("%i", p[i][j]);
                }
            }
            printf("\n");
        }
    }

    return 0;
}
