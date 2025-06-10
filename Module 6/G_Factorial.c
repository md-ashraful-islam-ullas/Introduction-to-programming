# include <stdio.h>
int main()
{
    int x;
    int n;
    scanf("%d", &x);
    for (int i = 1; i <= x; i++)
    {    
        long long int sum = 1;
        scanf("%d", &n);
        for (int y = 1; y <= n; y++)
        {
            sum = sum * y;
        }
        printf("%lld\n", sum);
    }
    return 0;
}