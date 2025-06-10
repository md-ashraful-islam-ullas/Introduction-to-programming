# include <stdio.h>
int main()
{
    int a;
    scanf("%d", &a);
    for(int i = 1; i <= 30; i++)
    {
        if (a*i > 200)
        {
            break;
        }
        printf("%d * %d = %d\n", a, i, a*i);
    }
    return 0;
}