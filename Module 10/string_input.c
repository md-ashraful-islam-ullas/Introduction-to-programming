# include <stdio.h>
int main()
{
    char array[8];
    scanf("%s", &array); // can't take input with space.
    printf("%s\n", array);
    printf("%c\n", array[3]); 
    return 0;
}

// The next value after finishing string is a null value. 
// null means '0'. and the rest of them are garbage value.
// garbage means any integer value. 