# include <stdio.h>
int main()
{
    int a;
    scanf("%d", &a);
    for(; a >= 10; a = a/10)
    {}
    if (a % 2 == 0)
    {
        printf("EVEN");
    }
    else
    {
        printf("ODD");
    }
    return 0;
}