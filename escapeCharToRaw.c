#include <stdio.h>

main()
{
	int nc = 0;
	
	while ((nc = getchar()) != EOF)
	{
		
		if (nc == '\t')
		{
			putchar('\\');
			putchar('t');
		}
		else if (nc == '\b')
		{
			putchar('\\');
			putchar('b');
		}
		else if (nc == '\\')
		{
			putchar('\\');
			putchar('\\');
		}
		else
		{
			putchar(nc);
		}
	}
	
	return 0;
}

