#include <stdio.h>
#include <stdlib.h>
void funt(int *x, int y)
{
    if (y == 0)
    {
        return ;
    }
    printf("%d", y);
    funt(x, --y);
}

int main()
{
    int x[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}, y = 10;

    funt(&x, y);
}