#include <stdio.h>

main()
{
	int fahr, celsius;
	int lower, upper, step;
	
	lower = 0;
	upper = 300;
	step = 20;
	
	celsius = lower;
	
	printf("print Celsius-Fahrenheit table\n");
	printf("for celsius = 0, 20, ..., 300\n");
	
	while (celsius <= upper)
	{
		fahr = celsius * 9 / 5 + 32;
		printf("%d\t%d\n",celsius, fahr);
		celsius += step;
	}
}
