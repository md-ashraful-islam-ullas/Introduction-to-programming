# include <stdio.h>
void fun(int* pointer)
{
    *pointer = 20;
    printf("Fun fucntion er x er value: %d\n", *pointer);
}
int main()
{
    int x = 10;
    fun(&x);
    printf("main e x er value: %d\n", x);
    return 0;
}