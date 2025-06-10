# include <stdio.h>
int main()
{
    char array[8];
    for (int i = 0; i < 8; i++)
    {
        scanf("%c", &array[i]);
    }
    for (int i = 0; i < 8; i++)
    {
        printf("%c", array[i]);
    }
    return 0;
}