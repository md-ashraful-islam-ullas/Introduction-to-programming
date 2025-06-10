# include <stdio.h>
int main()
{
    int t;
    int x, y;
    int temp;
    scanf("%d", &t);
    for (int i = 1; i <= t; i++)
    {
        scanf("%d %d", &x, &y);
        if (x < y)
        {
            int sum = 0;
            for (int n = x+1; n <= y-1; n++)
            {
            if (n % 2 != 0)
            sum = sum + n;
            }
            printf("%d\n", sum);
        }
        else
        {
            temp = x;
            x = y;
            y = temp;

            int sum = 0;
            for (int n = x+1; n <= y-1; n++)
            {
            if (n % 2 != 0)
            sum = sum + n;
            }
            printf("%d\n", sum);
        }
    }
    return 0;
}