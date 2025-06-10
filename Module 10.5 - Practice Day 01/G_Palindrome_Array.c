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

    int flag = 1;
    for (int i = 0, j = n-1; i < j; i++,j--)
    {
        if (array[i] != array[j])
        {
            flag = 0;
            break;
        }
    }

    if (flag)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
    return 0;
}