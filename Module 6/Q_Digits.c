# include <stdio.h>
int main()
{
    int x;
    scanf("%d", &x);
    for (int i = 1; i <= x; i++)
    {
        int n;
        scanf("%d", &n);
        if (n == 0)
        {
            printf("0");
        }
        while(n!=0)
        {
            printf("%d ", n%10);
            n = n/10;
        }
        printf("\n");
    }
    return 0;
    
}