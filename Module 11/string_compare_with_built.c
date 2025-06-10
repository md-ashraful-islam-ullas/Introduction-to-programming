# include <stdio.h>
# include <stdbool.h>
# include <string.h>
int main()
{
    char array_a[101], array_b[101];
    scanf("%s %s", &array_a, &array_b);

    printf("%d\n", strcmp(array_a,array_b));

    int val = strcmp(array_a, array_b);

    if (val > 0)
    {
        printf("B is smaller");
    }
    else if (val < 0)
    {
        printf("A is smaller");
    }
    else if (val == 0)
    {
        printf("Equal");
    }
    return 0;
}

// -1 for first one is smaller.
// 1 for second one is smaller.
// 0 for Equal.

