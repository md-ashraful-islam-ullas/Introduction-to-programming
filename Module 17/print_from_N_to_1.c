# include <stdio.h>
void hello(int i)
{
    printf("%d ", i);
    if (i == 1)            // end condition / base case
    {
        return;
    }
    hello(i-1);            // increment/decrement
}
int main()
{
    int i = 5;
    hello(i);           // initialization
    return 0;
}