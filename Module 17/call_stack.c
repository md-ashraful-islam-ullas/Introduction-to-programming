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