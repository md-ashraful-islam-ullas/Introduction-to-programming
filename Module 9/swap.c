# include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int array[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
    }
    int idx1, idx2;
    scanf("%d %d", &idx1, &idx2);

    int temp;
    temp = array[idx1];
    array[idx1] = array[idx2];
    array[idx2] = temp;

    for (int i = 0; i < n; i++)
    {
        printf("%d ", array[i]);
    }
    return 0;
}