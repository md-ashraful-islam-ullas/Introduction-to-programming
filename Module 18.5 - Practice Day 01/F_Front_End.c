# include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int array[n];
    for (int i= 0; i < n; i++)
    {
        scanf("%d", &array[i]);
    }
    for (int i= 0, j = n-1; i <= j; i++,j--)
    {
        if (i == j)
        {
            printf("%d", array[i]);
        }
        else
        {
            printf("%d %d ", array[i], array[j]);
        }
    }
    return 0;
}