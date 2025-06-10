# include <stdio.h>
int main()
{
    char array[50];
    gets(array);
    // fgets(array,50,stdin);

    // fgets() takes 'enter' as input. gets() doesn't do it.
    // will use scanf("%s", array) when input without any space.
    // otherwise use gets() / fgets() 

    printf("%s", array);
    return 0;
}