# include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int max = 0;
    int array[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
        if (array[i] > max)
        {
            max = array[i];
        }
    }
    printf("%d", max);
    return 0;
}