# include <stdio.h>

void print_1_N(int i, int n)
{
    if (i > n)
    {
        return;
    }
    printf("%d\n", i);
    print_1_N(i+1, n);
}
int main()
{
    int n;
    scanf("%d", &n);
    print_1_N(1, n);
    return 0;
}