# include <stdio.h>
# include <math.h>
int main()
{
    int r;
    scanf("%d", &r);
    int c = r;
    int arrray[r][c];
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d", &arrray[i][j]);
        }
    }

    int main_diagonal = 0;
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            if (i != j)
            {
                main_diagonal = main_diagonal + arrray[i][j];
            }
        }
    }

    int secondary_diagonal = 0;
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            if ((i+j) != (r-1))
            {
                secondary_diagonal = secondary_diagonal + arrray[i][j];
            }
        }
    }

    int absolute_difference = abs(main_diagonal-secondary_diagonal);
    printf("%d", absolute_difference);
    return 0;
}