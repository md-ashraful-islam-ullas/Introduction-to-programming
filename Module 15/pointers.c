# include <stdio.h>
int main()
{
    int x;
    scanf("%d", &x);
    printf("%d\n", x);
    printf("%p\n", &x);

    int* pointer;
    pointer = &x;
    *pointer = 200;
    printf("%d\n", x);

    // printf("%p\n", pointer);
    printf("%d", *pointer);   // Dereferencing
    return 0;
}