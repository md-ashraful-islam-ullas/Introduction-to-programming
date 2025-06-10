# include <stdio.h>
char small_to_capital(char c)
{
    char a = c - 32;
    return a;
}
int main()
{
    char c;
    scanf("%c", &c);
    printf("%c", small_to_capital(c));
    return 0;
}