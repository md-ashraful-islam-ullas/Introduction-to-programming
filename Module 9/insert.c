# include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int array[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
    }
    int idx, val;
    scanf("%d %d", &idx, &val);

    for (int i = n; i >= idx+1; i--)
    {
        array[i] = array[i-1];
    }
    array[idx] = val;
    
    for (int i = 0; i <= n; i++)
    {
        printf("%d ", array[i]);
    }
    return 0;
}