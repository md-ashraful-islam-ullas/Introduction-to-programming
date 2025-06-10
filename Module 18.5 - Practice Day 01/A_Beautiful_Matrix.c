# include <stdio.h>
# include <math.h>
int main()
{
    int row = 0; int colomn = 0;
    int d_row = 2; int d_colomn = 2;
    int array[5][5];
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            scanf("%d", &array[i][j]);
            if (array[i][j] == 1)
            {
                row = i; colomn = j;
                break;
            }
        }
    }
    
    
    int move = abs(row - d_row) + abs(colomn - d_colomn);
    printf("%d\n", move);
    return 0;
}