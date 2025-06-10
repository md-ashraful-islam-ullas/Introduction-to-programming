# include <stdio.h>

int count_before_one(int array[], int n)
{
    int count_1 = 0;
    for (int i = 0; i < n; i++)
    {
        if (array[i] != 1)
        {
            count_1++;
        }
        else
        {
            break;
        }
    }

    return count_1;
}
int main()
{
    int n;
    scanf("%d", &n);
    int array[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
    }
    printf("%d", count_before_one(array,n));
    return 0;
}