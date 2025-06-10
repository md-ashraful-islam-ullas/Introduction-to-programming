# include <stdio.h>
# include <math.h>
int main()
{
    int n;
    scanf("%d", &n);
    int hash = 1;
    int space = n-1;
    int minus = 3;
    for (int i = 1; i <= n; i++)
    {
        if ( i % 2 != 0)
        {
            for (int j = 1; j <= space; j++)
            {
                printf(" ");
            }
            for (int k = 1; k <= hash; k++)
            {
                printf("#");
            }
            hash+=4;
        }
        else
        {
            for (int j = 1; j <= space; j++)
            {
                printf(" ");
            }
            for (int k = 1; k <= minus; k++)
            {
                printf("-");
            }
            minus+=4;
        }
        space--;
        printf("\n");
    }

    if (n % 2 != 0)
    {
        int space1 = 1;
        int hash1 = (((2*n)-1)-4);
        int minus1 = (((2*n)-1)-2);
        for (int i = n+1; i <= (2*n)-1; i++)
        {
            if ( i % 2 != 0)
            {
                for (int j = 1; j <= space1; j++)
                {
                    printf(" ");
                }
                for (int k = 1; k <= hash1; k++)
                {
                    printf("#");
                }
                hash1-=4;
            }
            else
            {
                for (int j = 1; j <= space1; j++)
                {
                    printf(" ");
                }
                for (int k = 1; k <= minus1; k++)
                {
                    printf("-");
                }
                minus1-=4;
            }
            space1++;
            printf("\n");
        }
    }
    else
    {
        int space1 = 1;
        int hash1 = ((2*n)-3);
        int minus1 = ((2*n)-5);
        for (int i = n+1; i <= (2*n)-1; i++)
        {
            if ( i % 2 != 0)
            {
                for (int j = 1; j <= space1; j++)
                {
                    printf(" ");
                }
                for (int k = 1; k <= hash1; k++)
                {
                    printf("#");
                }
                hash1-=4;
            }
            else
            {
                for (int j = 1; j <= space1; j++)
                {
                    printf(" ");
                }
                for (int k = 1; k <= minus1; k++)
                {
                    printf("-");
                }
                minus1-=4;
            }
            space1++;
            printf("\n");
        }
    }
    return 0;
}