# include <stdio.h>
# include <string.h>
int main()
{
    char array[1001];
    scanf("%s", &array);

    int n = strlen(array);

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