# include <stdio.h>
# include <stdbool.h>
int main()
{
    char array_a[101], array_b[101];
    scanf("%s %s", &array_a, &array_b);

    int i = 0;
    while (true)
    {
        if (array_a[i] == '\0' && array_b[i] == '\0')
        {
            printf("Equal");
            break;
        }
        else if (array_a[i] == '\0')
        {
            printf("A is smaller");
            break;
        }
        else if (array_b[i] == '\0')
        {
            printf("B is smaller");
            break;
        }
        else if (array_a[i] < array_b[i])
        {
            printf("A is smaller");
            break;
        }
        else if (array_a[i] > array_b[i])
        {
            printf("B is smaller");
            break;
        }
        else if (array_a[i] == array_b[i])
        {
            i++;
        }
    }
    return 0;
}