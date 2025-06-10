// # include <stdio.h>
// void m(int* p)
// {
//     int i = 0;
//     for (i = 0; i < 5; i++)
//     {
//         printf("%d ", p[i]);
//     }
// }
// int main()
// {
//     int a[5] = {6,5,3};
//     m(a);
//     return 0;
// }

// # include <stdio.h>
// int main()
// {
//     int array[4] = {1,2,3,4};
//     printf("%d\n", *array);
//     return 0;
// }

# include <stdio.h>
int main()
{
    int array[4] = {1,2,3,4};
    int* p;
    p = array +3;
    *p = 5;
    printf("%d ", array[3]);
    return 0;
}