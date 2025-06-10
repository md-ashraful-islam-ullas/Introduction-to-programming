# include <stdio.h>
# include <string.h>
int main()
{
    char array_a[101], array_b[101];
    scanf("%s %s", &array_a, &array_b);

    int len_b = strlen(array_b);
    int len_a = strlen(array_a);

    for (int i = 0; i <= len_b; i++)
    {
        array_a[len_a+i] = array_b[i];
    }

    // array_a[len_a+len_b] = '\0';

    printf("%s %s", array_a, array_b);
    return 0;
}