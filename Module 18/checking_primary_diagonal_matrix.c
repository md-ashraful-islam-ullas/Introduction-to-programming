# include <stdio.h>
int main()
{
    int r, c;
    scanf("%d %d", &r, &c);
    int array[r][c];
    for (int i = 0; i < r; i++)
    {
        for(int j = 0; j < c; j++)
        {
            scanf("%d", &array[i][j]);
        }
    }

    int flag = 1;
    if (r==c)
    {
        for (int i = 0; i < r; i++)
        {
            for(int j = 0; j < c; j++)
            {
                if ( i != j)
                {
                    if (array[i][j] != 0)
                    {
                        flag = 0;
                        printf("Not Diagonal Matrix.");
                    }
                }
            }
        }
        if (flag==1)
        {
            printf("Diagonal Matrix");
        }
    }
    else
    {
        printf("Not Diagonal Matrix.");
    }
    return 0;
}