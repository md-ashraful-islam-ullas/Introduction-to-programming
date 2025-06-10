# include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int sum_pos = 0;
    int sum_neg = 0;
    int array[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
        if (array[i] > 0)
        {
            sum_pos = sum_pos + array[i];
        }
        else if (array[i] < 0)
        {
            sum_neg = sum_neg + array[i];
        }
    }
    printf("%d %d", sum_pos, sum_neg);
    return 0;
}