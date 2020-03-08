#include <stdio.h>
#include <stdlib.h>

char *substr(char *str, int inicio, int fim)
{

    char *nome;
    int j = 0;

    nome = ((char *)malloc(sizeof(int) * 100));
    int i = 0;
    while (str[i] != '\0')
    {
        if ((i > inicio - 1) && (i < fim + 1))
        {
            nome[j] = str[i];
            j++;
            nome[j + 1] = '\0';
        }
        i++;
    }

    if ((inicio > 0) || (fim < i))
    {

        return nome;
    }
    else
    {
        return 0;
    }
}

int main()
{
    char p[100] = "algoritmos";
    printf("%s\n", p);
    substr(p, 2, 5);
}