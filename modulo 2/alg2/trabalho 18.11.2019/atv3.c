#include <stdio.h>
#include <stdio.h>
#include <math.h>
#include <string.h>
int f(int x, int y)
{
    {
        if (x == 0)
            return y;
        else
            return f(x - 1, x + y);
    }
}

int main()
{
    int x, y, k;
    scanf("%d %d", &x, &y);
    k = f(x, y);
    printf("%d\n", k);
}
