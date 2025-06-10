# include <stdio.h>

int max(int array[], int n)
{
    
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
    int ans = max(array, n);
    return 0;
}