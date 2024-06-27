#include <stdio.h>
#include <string.h>

#define IN 1
#define OUT 0

// count lines, words, and characters in input

int main()
{
	int state, c, counter;
	state = IN;
	counter = 0;
	bool test;
	char testChar;

	printf("sizeof state %zu\n", sizeof(state));
	printf("sizeof IN %fu\n", sizeof(IN));
	printf("sizeof OUT %zu\n", sizeof(OUT));
	printf("sizeof bool %zu\n", sizeof(bool));
	printf("sizeof char %zu\n", sizeof(testChar));

	while ((c = getchar()) != EOF)
	{
		if ( c ==  ' ' || c == '\n' || c == '\t')
		{
			state = OUT;
			++counter;
		}
		if (state == IN)
		{
			putchar(c);
			counter = 0;
		}
		else if (state == OUT)
		{
			state = IN;
			if (counter == 1)
				printf("\n");
		}
	}
}
