# include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int val = 4;
    int space = 0;
    for (int i = 1; i <= n; i++)
    {
        for (int i = 1; i <= space; i++)
        {
            printf("  ");
        }

        for (int i = 1; i <= val; i++)
        {
            printf("%d ",i);
        }

        if (i == 1)
        {
            val+=1;
            space+=3;
        }
        else if(i == 2)
        {
            val+=3;
            space-=3;
        }
        printf("\n");
    }
    return 0;
}