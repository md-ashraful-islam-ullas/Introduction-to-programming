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

    for (int i = 0; i < c; i++)
    {
        printf("%d ", array[x][i]);
    }
    return 0;
}