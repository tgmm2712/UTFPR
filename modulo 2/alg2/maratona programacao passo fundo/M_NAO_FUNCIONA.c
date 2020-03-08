#include <stdio.h>
#include <math.h>

int main(void) {
    int n, c, t;
    scanf("%d %d %d", &n, &c, &t);
    int p[n];
    long long total = 0;;
    for (int i = 0; i < n; i++) {
        scanf("%d", &p[i]);
        total += p[i];
    }

    if (c >= n) {
        int maior = p[0];
        for (int i = 1; i < n; i++) {
            if (p[i] > maior)
                maior = p[i];
        }
        int res = ceil((double)maior/(double)t);
        printf("%d\n", res);
        return 0;
    }

    int f = n/c;
    int teto = ceil((double)n / (double)c);
    int maior = 0;
    int soma;
    int media = total / c;
//    printf("Total: %lld\n", total);
//    printf("Media: %d\n", media);
    
    for (int i = 0; i < n; i += teto) {
        soma = 0;
        for (int j = 0; j < teto; j++){
            if (i + j < n) {
                soma += p[i+j];
                if (soma > media)
                    break;
            }
        }
        if (soma > maior) 
            maior = soma;
    }
    int res = ceil((double)maior/(double)t);
    printf("%d\n", res);
    return 0;
}
