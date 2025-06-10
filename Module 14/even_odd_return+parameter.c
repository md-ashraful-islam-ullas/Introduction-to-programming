# include <stdio.h>

int is_even(int x)
{
    if (x % 2 == 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main()
{
    int x;
    scanf("%d", &x);
    if (is_even(x))
    {
        printf("Yes");
    }
    else
    {
        printf("No");
    }
    return 0;
}