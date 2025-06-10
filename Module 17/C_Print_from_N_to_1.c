# include <stdio.h>

void print_1_N(int i, int n)
{
    if (i > n)
    {
        return;
    }
    print_1_N(i+1, n);
    printf("%d", i);
    if (i != 1)
    {
        printf(" ");
    }
}
int main()
{
    int n;
    scanf("%d", &n);
    print_1_N(1, n);
    return 0;
}