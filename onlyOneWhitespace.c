#include <stdio.h>

main()
{
	int nc, w;
	nc = w = 0;
	
	while ((nc = getchar()) != EOF)
	{
		
		if (nc == ' ' || nc == '\t' || nc == '\n')
		{
			if (!w)
			{
				putchar(nc);
			}
			w = 1;
		}
		else
		{
			putchar(nc);
			w = 0;
		}
	}
	
	return 0;
}

