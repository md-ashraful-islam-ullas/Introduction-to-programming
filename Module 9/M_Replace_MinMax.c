# include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int array[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
    }

    int min = 100000;
    int max = -100000;

    for (int i = 0; i < n; i++)
    {
        if (array[i] < min)
        {
            min = array[i];
        }
    }

    for (int i = 0; i < n; i++)
    {
        if (array[i] > max)
        {
            max = array[i];
        }
    }

    for (int i = 0; i < n; i++)
    {
        if (array[i] == min)
        {
            array[i] = max;
        }
        else if (array[i] == max)
        {
            array[i] = min;
        }
    }

    for (int i = 0; i < n; i++)
    {
        printf("%d ", array[i]);
    }
    return 0;
}