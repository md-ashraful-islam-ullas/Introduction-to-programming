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
    for (int i = 0; i < r; i++)
    {
        for(int j = 0; j < c; j++)
        {
            if (array[i][j] != 0)
            {
                flag = 0;
                break;
            }
        }
    }
    if (flag)
    {
        printf("Zero Matrix");
    }
    else
    {
        printf("Non-Zero Matrix");
    }
    return 0;
}