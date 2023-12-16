#include <stdio.h>

main()
{
	int c, nc = 0;
	
	for (c = 0; (nc = getchar()) != EOF; ++c);
	
	printf("number of char: %d", c);
}

