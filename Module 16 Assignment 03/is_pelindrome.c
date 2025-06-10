# include <stdio.h>
# include <string.h>
int is_palindrome(char array[])
{
    int n = strlen(array);
    int flag = 1;
    for (int i = 0, j = n-1; i < j; i++,j--)
    {
        if (array[i] != array[j])
        {
            flag = 0;
            break;
        }
    }

    if (flag == 1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main()
{
    char array[1001];
    scanf("%s", &array);
    int answer = is_palindrome(array);
    if (answer == 1)
    {
        printf("Palindrome");
    }
    else 
    {
        printf("Not Palindrome");
    }
    return 0;
}