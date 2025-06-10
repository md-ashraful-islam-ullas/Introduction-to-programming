# include <stdio.h>
int main()
{
    char c;
    scanf("%c", &c);
    if (c >= 48 && c <= 57)
    {
        printf("IS DIGIT");
    }
    else if (c >= 65 && c <= 90)
    {
        printf("ALPHA\n");
        printf("IS CAPITAL");
    }
    else 
    {
        printf("ALPHA\n");
        printf("IS SMALL");
    }
    return 0;
}