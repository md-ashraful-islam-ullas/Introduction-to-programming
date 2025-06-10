# include <stdio.h>

void print_string(int n, int i)
{   
    if (i == n)
    {
        return;
    }
    printf("I love Recursion\n");
    print_string(n, i+1);
}
int main()
{
    int n;
    scanf("%d", &n);
    print_string(n, 0);
    return 0;
}