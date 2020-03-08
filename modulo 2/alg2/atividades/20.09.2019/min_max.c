#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv) {
    int v[20], n, i;
    int *p_max, *p_min;

    scanf("%d", &n);
    for (i=0; i < n; i++) {
        scanf("%d", v + i);
    }

    if (n > 0) {//aki começa o codigo
        p_max=v+0;
        p_min=v+0;        
       for (int i=0;i < n;i++){
           if(*p_max < v[i]){
               p_max =v + i;
               } 

       }
        for (int i=0;i < n;i++){
           if(*p_min > v[i]){
               p_min = v + i;
               } 

       }//termina aqui
        
        printf("%d %d %d %d\n", *p_max, p_max - v, *p_min, p_min - v);
    } else {
        printf("Vetor vazio\n");
    }

    return 0;
}
