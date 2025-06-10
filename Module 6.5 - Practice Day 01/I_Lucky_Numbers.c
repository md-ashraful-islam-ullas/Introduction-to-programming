# include <stdio.h>
int main()
{
    int num;
    scanf("%d", &num);
    if (((num%10) % (num/10)) == 0 || ((num/10) % (num%10)) == 0)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
    return 0;
}