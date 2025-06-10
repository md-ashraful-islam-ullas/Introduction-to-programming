# include <stdio.h>
# include <string.h>
int main()
{
    int n;
    scanf("%d", &n);
    char name[n][101];
    for (int i = 0; i < n; i++)
    {
        scanf("%s", name[i]);
        int len = strlen(name[i]);

        if (len <= 10)
        {
            printf("%s\n", name[i]);
        }
        else
        {
            printf("%c%d%c\n", name[i][0], len-2, name[i][len-1]);
        }
    }
    return 0;
}