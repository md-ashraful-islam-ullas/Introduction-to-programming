# include <stdio.h>
# include <string.h>
# include <stdlib.h>
int main()
{
    char number[200];
    scanf("%s", &number);

    int sum_even = 0;
    int sum_odd = 0;
    int length = strlen(number);

    for (int i = length-1, pos = 1; i >= 0; i--, pos++)
    {
        if (pos % 2 != 0)
        {
            int digit = number[i] - '0';
            sum_odd += digit;
        }
        else
        {
            int digit = number[i] - '0';
            sum_even += digit;
        }
    }

    int difference = abs(sum_even - sum_odd);
    if (difference % 11 == 0)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
    return 0;
}
