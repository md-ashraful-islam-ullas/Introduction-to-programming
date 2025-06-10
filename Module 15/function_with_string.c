# include <stdio.h>
# include <string.h>

void fun(char array[])
{
    printf("%s\n", array);
    printf("%d", strlen(array));
}

int main()
{
    char array[10];
    scanf("%s", &array);
    fun(array);
    return 0;
}