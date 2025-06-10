# include <stdio.h>

int lucky_check(int n)
{
    for (; n > 0; n = n/10)
    {
        int digit = n%10;
        if (digit != 4 && digit != 7)
        {
            return 0;
        }
    }
    return 1;

}
int main()
{
    int n;
    scanf("%d", &n);
    int ans = lucky_check(n);
    if (ans == 1)
    {
        printf("YES");
    }
    else if ((n/4) % 2 == 0)
    {
        printf("YES");
    }
    else if ((n/7) % 2 == 0)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
    return 0;
}