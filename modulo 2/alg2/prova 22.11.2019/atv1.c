#include <stdio.h>
#include <stdlib.h>
void funt(int num)
{

    if ( 0 <= num){
        printf("%d\n",num);
    }
    else
    {
        return;
    }
    

    funt(num-1);
}

int main()
{
    int num;
    scanf("%d", &num);

    funt(num);
}