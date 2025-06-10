# include <stdio.h>
int main()
{
    char array_a[30], array_b[30];
    scanf("%s", &array_a);
    scanf("%s", &array_b);

    int i = 0;
    while(1)
    {
        if (array_a[i] == '\0' && array_b[i] == '\0')
        {
            printf("%s", array_a);
            break;
        }
        else if (array_a[i] == '\0')
        {
            printf("%s", array_a);
            break;
        }
        else if (array_b[i] == '\0')
        {
            printf("%s", array_b);
            break;
        }
        else if (array_a[i] > array_b[i])
        {
            printf("%s", array_b);
            break;
        }
        else if (array_a[i] < array_b[i])
        {
            printf("%s", array_a);
            break;
        }
        else if (array_a[i] == array_b[i])
        {
            i++;
        }
    }
    return 0;

}