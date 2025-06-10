# include <stdio.h>
int main()
{
    int n;
    int x;
    scanf("%d", &n);
    int array[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
    }
    scanf("%d", &x);

    int found = 0;
    for (int i = 0; i < n; i++)
    {
        if ( x == array[i])
        {
            printf("%d", i);
            found = 1;
            break;
        }
    }
    if (found == 0)
    {
        printf("%d", -1);
    }
    return 0;
}