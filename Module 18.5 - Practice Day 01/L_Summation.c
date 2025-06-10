#include <stdio.h>

long long int summation(int array[], int n)
{
    if (n <= 0) 
    {
        return 0;
    }
    return array[n-1] + summation(array, n-1);
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

    long long int result = summation(array, n);
    printf("%lld\n", result);

    return 0;
}
