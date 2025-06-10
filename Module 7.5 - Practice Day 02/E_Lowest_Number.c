# include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int min = 1000000;
    int array[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
        if (array[i] < min)
        {
            min = array[i];
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (array[i] == min)
        {
            printf("%d %d", array[i], i+1);
            break;
        }
    }
    return 0;
}