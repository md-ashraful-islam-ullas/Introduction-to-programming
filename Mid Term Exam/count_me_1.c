# include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);

    int count_2 = 0;
    int count_3 = 0;

    int array[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);

        if (array[i] % 2 == 0 && array[i] % 3 == 0)
        {
            count_2++;
        }
        else if (array[i] % 2 == 0)
        {
            count_2++;
        }
        else if (array[i] % 3 == 0)
        {
            count_3++;
        }
    }
    printf("%d %d", count_2, count_3);

    return 0;
}