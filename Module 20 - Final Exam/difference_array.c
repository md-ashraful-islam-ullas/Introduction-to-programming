# include <stdio.h>
# include <math.h>
int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        int m;
        scanf("%d", &m);
        int array_A[m];
        for (int j = 0; j < m; j++)
        {
            scanf("%d", &array_A[j]);
        }

        int array_B[m];
        for (int j = 0; j < m; j++)
        {
            array_B[j] = array_A[j];
        }

        for (int i = 0; i < m-1; i++)
        {
            for (int j = i+1; j < m; j++)
            {
                if (array_B[i] > array_B[j])
                {
                    int temp = array_B[i];
                    array_B[i] = array_B[j];
                    array_B[j] = temp;
                }
            }
        }

        int array_C[m];
        for (int i = 0; i < m; i++)
        {
            array_C[i] = abs(array_A[i] - array_B[i]);
            printf("%d ", array_C[i]);
        }
        printf("\n");
    }
    return 0;
}