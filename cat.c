#include <stdio.h>

main()
{
	char c = 0;
	
	while ((c = getchar()) != EOF)
	{
		putchar(c);
	}
}
