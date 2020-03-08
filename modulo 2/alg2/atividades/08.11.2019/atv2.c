int **fnz(int n, int m)
{
    int **p = (int **)malloc(sizeof(int *) * n);
    if (p == NULL)
        return NULL;
    for (int i = 0; i < n; i++)
    {
        p[i] = (int *)malloc(sizeof(int) * m);
    }
    return p;
}
