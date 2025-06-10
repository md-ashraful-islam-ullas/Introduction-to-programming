# include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int array_a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &array_a[i]);
    }

    int m;
    scanf("%d", &m);
    int array_b[m];
    for (int i = 0; i < m; i++)
    {
        scanf("%d", &array_b[i]);
    }

    int array_c[n+m];
    for (int i = 0; i < n; i++)
    {
        array_c[i] = array_a[i];
    }
    
    for (int i = 0; i < m; i++)
    {
        array_c[n+i] = array_b[i];
    }

    for (int i = 0; i < n+m; i++)
    {
        printf("%d ", array_c[i]);
    }
    return 0;
}