# include <stdio.h>
# include <string.h>
int main()
{
    char array_a[20];
    char array_b[20];
    scanf("%s", &array_a);
    scanf("%s", &array_b);

    int size_a = strlen(array_a);
    int size_b = strlen(array_b);
    printf("%d %d\n", size_a, size_b);

    char array_c[size_a+size_b+1];

    for (int i = 0; i < size_a; i++)
    {
        array_c[i] = array_a[i];
    }

    for (int i = 0; i < size_b; i++)
    {
        array_c[size_a+i] = array_b[i];
    }
    array_c[size_a+size_b] = '\0';
    
    printf("%s\n", array_c);

    int temp = array_a[0];
    array_a[0] = array_b[0];
    array_b[0] = temp;

    printf("%s %s", array_a, array_b);
    return 0;
}