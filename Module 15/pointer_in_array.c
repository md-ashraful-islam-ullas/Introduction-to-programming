# include <stdio.h>
int main()
{
    int array[5] = {10,20,30,40,50};
    *(array+2) = 11;
                    // array er name e pointer hishebe kaz kore.
                    // array er name e zero index er address. 
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", array[i]);
    }
    return 0;
}