# include <stdio.h>
# include <string.h>
int main()
{
    char array_a[10], array_b[10];
    scanf("%s %s", &array_a, &array_b);
    int len = strlen(array_b);

    for (int i = 0; i <= len; i++)
    {
        array_b[i] = array_a[i];
    }

    printf("%s %s", array_a, array_b);
    return 0;
}