# include <stdio.h>
int main()
{
    char ch;
    scanf("%c", &ch);
    int n = ch;
    if (n >= 65 && n <= 90)
    {
        n = n + 32;
        printf("%c", n);
    }
    else if (n >= 97 && n <= 122)
    {
        n = n - 32;
        printf("%c", n);
    }
    return 0;
}
// # include <stdio.h>
// int main()
// {
//     char ch;
//     scanf("%c", &ch);
//     if (ch>= 'a' && ch<= 'z')
//     {
//         ch = ch - 32;
//         printf("%c", ch);
//     }
//     else
//     {
//         ch = ch + 32;
//         printf("%c", ch);
//     }
//     return 0;
// }