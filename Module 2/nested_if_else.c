# include <stdio.h>
int main()
{
    int tk;
    scanf("%d", &tk);
    if (tk >= 5000)
    {
        printf("cox's bazar jabo\n");
        if (tk >= 10000)
        {
            printf("St. Martin jabo.");
        }
        else
        {
            printf("ferot ashbo");
        }
    }
    else
    {
        printf("Kothao jabona.");
    }
    return 0;
}