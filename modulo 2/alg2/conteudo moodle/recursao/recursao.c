#include <stdio.h>
#include <stdlib.h>

int chama(int n)
{
    if (n == 1)
        return 1;
        

    return n * chama(n - 1);
}

int main()
{
    int cont = 5;
    cont= chama(cont);
    printf("fatorial :%d\n", cont);
}