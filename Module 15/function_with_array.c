# include <stdio.h>

void fun(int array[], int n)
{
    *(array+1) = 100;
    for (int i = 0; i < n; i++)
    {
        printf("%d ", array[i]);
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
    fun(array, n);
    return 0;
}