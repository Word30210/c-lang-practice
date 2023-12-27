#include <stdio.h>

main()
{
	int c, nc;
	c = nc = 0;
	
	while ((nc = getchar()) != EOF)
	{
		if (nc == ' ' || nc == '\t' || nc == '\n')
		{
			++c;
		}
	}
	printf("%d", c);
	
	return 0;
}

