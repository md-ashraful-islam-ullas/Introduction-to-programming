# include <stdio.h>
int main()
{
    long long int n;
    scanf("%lld", &n);
    char array[n+1];
    scanf("%s", &array);
    int sum = 0;

    for (int i = 0; array[i] != '\0'; i++)
    {
        int digit = array[i] - '0';
        sum = sum + digit;
    }
    printf("%d", sum);
    return 0;
}