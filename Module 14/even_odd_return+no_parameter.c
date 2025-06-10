# include <stdio.h>

int is_even()
{
    int x;
    scanf("%d", &x);
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
    if(is_even())
    {
        printf("Yes");
    }
    else
    {
        printf("No");
    }
    return 0;
}