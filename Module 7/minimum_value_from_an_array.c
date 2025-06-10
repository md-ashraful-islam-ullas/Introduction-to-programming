# include <stdio.h>
# include <math.h>
int main()
{
    int n;
    scanf("%d", &n);
    long long int min = INFINITY; // infinite value
    int array[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
        if (array[i] < min)
        {
            min = array[i];
        }
    }
    printf("%lld", min);
    return 0;
}