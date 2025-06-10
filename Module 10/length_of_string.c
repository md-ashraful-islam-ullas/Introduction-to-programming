# include <stdio.h>
# include <string.h>
int main()
{
    char array[50];
    scanf("%s", array);

    // int count = 0;
    // for (int i = 0; array[i] != '\0'; i++)
    // {
    //     count++;
    // } 
    // printf("%d", count);

    int size = strlen(array);     // using built in fucntion strlen()
    printf("%d", size);
    return 0;
}