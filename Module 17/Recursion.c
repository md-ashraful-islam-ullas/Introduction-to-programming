# include <stdio.h>
void gello()
{
    printf("gello\n");
}
void mello()
{
    printf("mello\n");
    gello();
}
void hello()
{
    printf("Hello\n");
    mello();
}
int main()
{
    printf("Hi\n");
    hello();
    return 0;
}

// If a function call himself to do something, that is called
// Recursion.
// The 'Function' that called himself is called "Recursive Function".