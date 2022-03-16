#include <stdio.h>
#include "prog1.h"

int line(char c, int length)
{
	
	for(int i = 0; i<length;i++)
	{
		printf("%c",c);
	}
}

int main()
{
	int length;
	printf("Add meg a hosszt: ");
	scanf("%d",&length);
	printf("hello\n");
	line('-', length);
	printf("\nworld\n");
}