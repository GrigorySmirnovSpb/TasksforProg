#include <stdio.h>
#include <string.h>

int main()
{
    char s[100] = "";
    printf("Enter a sequence of parentheses\n");
    scanf("%s", s);
    int i, f, c = 0;
    while ((i < strlen(s)) && (f == 0))
    {
        if (s[i] == '(')
        {
            c++;
        }
        else
        {
            c--;
        }
        if (c < 0)
        {
            f = 1;
        }
        i++;
    }
    if (f == 0 && c == 0)
    {
        printf("True\n");
    }
    else
    {
        printf("False\n");
    }
    return 0;
}