# include <stdio.h>

void print_even_array(int array[], int n, int i)
{
    if (i == n)
    {
        return;
    }
    print_even_array(array, n, i+1);
    if (i % 2 == 0)
    {
        if (i != 0)
        {
            printf("%d ", array[i]);
        }
        else
        {
            printf("%d", array[i]);
        }
    }
    
}
int main()
{
    int n;
    scanf("%d", &n);
    int array[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
    }
    print_even_array(array, n, 0);
    return 0;
}