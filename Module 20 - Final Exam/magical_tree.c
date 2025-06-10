# include <stdio.h>

int line_check(int n)
{
    return 6 + (n - 1) / 2;
}

int main()
{
    int n;
    scanf("%d", &n);
    int line = line_check(n);
    int star = 1;
    int space = line - 1;
    for (int i = 1; i <= line; i++)
    {
        for (int j = 1; j <= space; j++)
        {
            printf(" ");
        }
        for (int j = 1; j <= star; j++)
        {
            printf("*");
        }
        printf("\n");
        star+=2;
        space--;
    }

    int space2= 5;
    int star2 = n;
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= space2; j++)
        {
            printf(" ");
        }
        for (int j = 1; j <= star2; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}