# include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int count = 0;
    int array[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
        if (array[i] % 2 != 0)
        count++;
    }
    printf("%d", count);
    return 0;
}