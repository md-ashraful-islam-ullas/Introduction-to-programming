# include <stdio.h>
int main()
{
    int n, x;
    scanf("%d %d", &n, &x);
    long long int array[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%lld", &array[i]);
    }

    for (int i = 0; i < n-1; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if (array[i] < array[j])
            {
                long long int temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }
        }
    }
    long long int sum = 0;
    for (int i = 0; i < x; i++) 
    {
        if (array[i] > 0)
        {
            sum += array[i];
        }
    }


    printf("%lld", sum);
    return 0;
}