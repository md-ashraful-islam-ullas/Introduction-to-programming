# include <stdio.h>
int main()
{
    int n , x;
    scanf("%d", &n);
    int array[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
    }
    scanf("%d", &x);

    int flag = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if (array[i] + array[j] == x)
            {
                flag = 1;
            }
        }
    }

    if (flag)
    {
        printf("Yes");
    }
    else
    {
        printf("NO");
    }
    return 0;
}