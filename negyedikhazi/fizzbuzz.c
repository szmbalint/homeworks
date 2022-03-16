#include <stdio.h>
#include "prog1.h"
#include <string.h>



int main()
{
	
	for (int i = 1; i <= 100; i++) 
	{
		printf("number= %d %s%s\n", i, i%3?"":"Fizz", i%5?"":"Buzz");
	}
	
	
	return 0;
}