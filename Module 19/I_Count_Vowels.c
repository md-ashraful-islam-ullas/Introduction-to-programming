# include <stdio.h>

int length(char array[], int i)
{
    if (array[i] == '\0')
    {
        return 0;
    }
    int count = length(array, i+1);
    if (array[i] == 'a' || array[i] == 'A' ||array[i] == 'e' ||array[i] == 'E' ||array[i] == 'i' ||array[i] == 'I' ||array[i] == 'o' ||array[i] == 'O' ||array[i] == 'u' ||array[i] == 'U')
    {
        return count+1;
    }
    else
    {
        return count;
    }
}
int main()
{
    char array[201];
    fgets(array, 201, stdin);
    int ans = length(array, 0);
    printf("%d", ans);
    return 0;
}