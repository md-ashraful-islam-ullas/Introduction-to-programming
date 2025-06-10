# include <stdio.h>
int main()
{
    int n;
    int x;
    int v;
    scanf("%d", &n);
    int array[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
    }
    scanf("%d %d", &x, &v);
    array[x] = v;
    for (int i = n-1; i >= 0; i--)
    {
        printf("%d ", array[i]);
    }
    return 0;
}