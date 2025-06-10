# include <stdio.h>
int main()
{
    char array[10000001];
    scanf("%s", &array);
    int fre[26] = {0};

    for (int i = 0; array[i] != '\0'; i++)
    {
        fre[ array[i] - 'a' ]++;
    }

    for (int i = 0; i < 26; i++)
    {
        if (fre[i] > 0)
        {
            printf("%c : %d\n", i + 'a', fre[i]);
        }
    }
    return 0;
}