#include <stdio.h>
#include "prog1.h"
#include <string.h>
#include <stdlib.h>



int main(int argc, string argv[])
{

	if(argc > 3)
	{
		printf("%d",argc);
		printf("Hiba!");
		exit(1);
	}
	else if(argc < 3)
	{
		printf("%d",argc);
		printf("Hiba!");
		exit(1);
	}
	
	if(argc == 3)
	{
		string s1 = argv[1];
		int i1 = atoi(s1);
		printf("%d\n",i1);
		
		
		string s2 = argv[2];
		int i2 = atoi(s2);
		printf("%d\n",i2);
		
		
		int ossz = atoi(s1) + atoi(s2);
		printf("%d",ossz);
	}
	
	return 0;
}