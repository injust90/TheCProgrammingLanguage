#include <stdio.h>

int main()
{
    int c;
    bool firstBlank = false;

    while ((c = getchar()) != EOF)
    {
        if (c == ' ' || c == '\n' || c == '\t')
        {
            if (firstBlank) 
                putchar('\n');
            firstBlank = false;
        }
        else
        {
            putchar(c);
            firstBlank = true;
        }
    }
}
