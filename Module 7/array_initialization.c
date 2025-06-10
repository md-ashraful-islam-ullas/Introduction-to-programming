# include <stdio.h>
int main()
{
    int x = 10; // declare and initialization
    int array[5] = {10}; // declare and initialization
    // only work for fixed size array.
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", array[i]);
    }
    return 0;
}