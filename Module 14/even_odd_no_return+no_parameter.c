# include <stdio.h>

void is_even()
{
    int x;
    scanf("%d", &x);
    if (x % 2 == 0)
    {
        printf("Yes");
    }
    else
    {
        printf("No");
    }
}
int main()
{
    is_even();
    return 0;
}