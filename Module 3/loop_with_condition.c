# include <stdio.h>
int main()
{
    for(int i = 1; i <= 10; i++)
    {
        if(i % 2 != 0)
        {
            printf("%d = odd\n", i);
        }
        else
        {
            printf("%d = even\n", i);
        }
    }
    return 0;
}