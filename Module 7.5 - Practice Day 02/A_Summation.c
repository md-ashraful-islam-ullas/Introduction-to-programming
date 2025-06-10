# include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    long long int sum = 0;
    long long int array[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%lld", &array[i]);
        sum = sum + array[i];
    }
    if (sum > 0)
    {
        printf("%lld", sum);
    }
    else
    {
        printf("%lld", sum*-1);
    }
    return 0;
}