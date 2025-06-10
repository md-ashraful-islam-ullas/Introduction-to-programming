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
    int x;
    scanf("%d", &x);
    int flag = 1;
    for (int i = 0; i < r; i++)
    {
        for(int j = 0; j < c; j++)
        {
            if (array[i][j] == x)
            {
                flag = 0;
                break;
            }
        }
    }
    if (flag)
    {
        printf("will take number");
    }
    else
    {
        printf("will not take number");
    }
    return 0;
}