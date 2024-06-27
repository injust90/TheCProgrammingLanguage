#include <stdio.h>


#define IN 1 /* inside a word */
#define OUT 0 /* outside a word */

// Write a program that prints its input one word per line
/* count lines, words, and characters in input */
int main()
{
	int c;
	int state;
	int spaceCounter;
	int previous = EOF;

	state = IN;
	spaceCounter = 0;

	while((c = getchar()) != EOF)
	{
		if (c == ' ' || c == '\n' || c == '\t')
		{
			state = OUT;
			if (previous != ' ' && previous != '\n' && previous != '\t' && previous != EOF)
			{
				printf("\n");
			}
		}
		if (state == IN)
		{
			putchar(c);
		}
		else if (state == OUT)
		{
			state = IN;
		}
		previous = c;
	}
}

