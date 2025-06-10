# include <stdio.h>

long long int sum(int array[] , int n, int i)
{
    if ( n == 0)
    {
        return 0;
    }
    return array[i] + sum(array, n-1, i+1);
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
    long long int ans = sum(array, n, 0);
    printf("%lld", ans);
    return 0;
}