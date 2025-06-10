# include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int star = 4;
    int space = 0;
    for (int i = 1; i <= n; i++)
    {
        for (int i = 1; i <= space; i++)
        {
            printf("  ");
        }

        for (int i = 1; i <= star; i++)
        {
            printf("* ");
        }

        if (i == 1)
        {
            star-=3;
            space+=3;
        }
        else if(i == 2)
        {
            star+=3;
            space-=3;
        }
        printf("\n");
    }
    return 0;
}