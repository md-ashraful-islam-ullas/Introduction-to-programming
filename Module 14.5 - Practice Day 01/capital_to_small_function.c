# include <stdio.h>
char capital_to_small(char c)
{
    char a = c + 32;
    return a;
}
int main()
{
    char c;
    scanf("%c", &c);
    printf("%c", capital_to_small(c));
    return 0;
}