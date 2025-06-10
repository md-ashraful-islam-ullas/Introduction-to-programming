# include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    long long int array[4];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            scanf("%lld", &array[j]);  
        }

        long long int M = array[0];
        long long int A = array[1];
        long long int B = array[2];
        long long int C = array[3];

        if (M == 0)
        {
            printf("0\n");
        }
        else
        {
            if ((A*B*C) == M)
            {
                printf("1\n");
            }
            else if ((A*B*C) > M)
            {
                printf("-1\n");
            }
            else if ((A*B*C) < M)
            {
                if (M % (A*B*C) == 0)
                {
                    printf("%lld\n", M/(A*B*C));
                }
                else
                {
                    printf("-1\n");
                }
            }
        }
    }
    return 0;
}