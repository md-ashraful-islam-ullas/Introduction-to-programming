# include <stdio.h>
# include <string.h>
int main()
{
    char array_a[101], array_b[101];
    scanf("%s %s", &array_a, &array_b);

    strcat(array_a,array_b); // place after concat, who to concat

    printf("%s %s", array_a, array_b);
    return 0;
}