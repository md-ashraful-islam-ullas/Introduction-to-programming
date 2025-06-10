# include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int M1, M2, D;
    for (int i = 0; i < n; i++)
    {
        scanf("%d %d %d", &M1, &M2, &D);
        int fewer_days = D - ((M1*D)/(M1+M2));
        printf("%d\n", fewer_days);
    }
    return 0;
}