# include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int star = 1;
    int space = n-1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= space; j++)
        {
            printf(" ");
        }
        for (int k = 1; k <= star; k++)
        {
            printf("*");
        }
        printf("\n");
        space--;
        star+=2;
    }

    int star2 = (2*n)-1;
    int space2 = 0;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= space2; j++)
        {
            printf(" ");
        }
        for (int k = 1; k <= star2; k++)
        {
            printf("*");
        }
        printf("\n");
        space2++;
        star2-=2;
    }
    return 0;
}