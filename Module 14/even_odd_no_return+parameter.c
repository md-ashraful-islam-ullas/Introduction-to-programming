# include <stdio.h>

void is_even(int x)
{
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
    int x;
    scanf("%d", &x);
    is_even(x);
    return 0;
}