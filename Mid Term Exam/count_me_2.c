# include <stdio.h>
# include <string.h>
int main()
{
    char array[100002];
    scanf("%s", &array);

    int count_cons = 0;

    for (int i = 0; array[i] != '\0'; i++)
    {
        if (array[i] != 'a' && array[i] != 'e' && array[i] != 'i' && array[i] != 'o' && array[i] != 'u')
        {
            count_cons++;
        }
    }
    printf("%d", count_cons);
    return 0;
}