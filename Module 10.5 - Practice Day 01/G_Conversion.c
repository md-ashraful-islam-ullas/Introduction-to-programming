# include <stdio.h>
# include <string.h>
int main()
{
    char array[1000001];
    scanf("%s", &array);
    int n = strlen(array);

    for (int i = 0; i < n; i++)
    {
        if (array[i] >= 'a' && array[i] <= 'z')
        {
            array[i] = array[i] - 32;
        }
        else if (array[i] >= 'A' && array[i] <= 'Z')
        {
            array[i] = array[i] + 32;
        }
        else if (array[i] == ',')
        {
            array[i] = ' ';
        }
    }
    printf("%s", array);
    return 0;
}