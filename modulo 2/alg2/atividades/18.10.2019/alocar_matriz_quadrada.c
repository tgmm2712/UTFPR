#include <stdio.h>
#include <stdlib.h>

int** aloca_matriz_quadrada(int n) {
    int **p = malloc(sizeof(int*)*n);
    for(int j=0;j<n;j++){
        p[j] = malloc(n *sizeof(int));
    }
    return (p);
}

/* Código para teste */

int main() {
    int n, i, j, **p;

    while(1) {
        scanf("%d", &n);
        if (n <= 0)
            break;
            
        p = aloca_matriz_quadrada(n);
        
        for (i = 0; i < n; i++) {
            for (j = 0; j < n; j++) {
                p[i][j] = (1 << i) + ((1 << 30) >> j);
            }
        }
        
        for (i = n-1; i >= 0; i--) {
            for (j = 0; j < n; j++) {
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
