#include <stdio.h>
#include <stdlib.h>

int* aloca_vetor(int n) {
    int *vet = malloc(n *sizeof(int));
    return(vet);


}

/* Código para teste*/

int main() {
    int n, i, *p;

    while(1) {
        scanf("%d", &n);
        if (n <= 0)
            break;
        p = aloca_vetor(n);
        for (i = 0; i < n; i++) {
            *(p + i) = 1 << i;
        }
        for (i = n-1; i >= 0; i--) {
            if (i) {
                printf("%i, ", p[i]);
            } else {
                printf("%i", p[i]);
            }
        }
        printf("\n");
        
    }

    return 0;
}
