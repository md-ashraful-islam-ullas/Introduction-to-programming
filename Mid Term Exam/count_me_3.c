# include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    char array[10002];
    for (int i = 0; i < n; i++)
    {
        int count_cap  = 0;
        int count_sml = 0;
        int count_digit = 0;
        scanf("%s", &array);
        for (int i = 0; array[i] != '\0'; i++)
        {
            if (array[i] >= 'A' && array[i] <= 'Z')
            {
                count_cap++;
            }
            else if (array[i] >= 'a' && array[i] <= 'z')
            {
                count_sml++;
            }
            else if (array[i] >= '0' && array[i] <= '9')
            {
                count_digit++;
            }
        }
        printf("%d %d %d\n", count_cap, count_sml, count_digit);
    }


    return 0;
}