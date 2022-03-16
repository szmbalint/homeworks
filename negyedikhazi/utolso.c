#include <stdio.h>
#include "prog1.h"
#include <string.h>


int rfind_char(string szoveg, char c)
{
	int index = 0;
	for(int i = 0; i< strlen(szoveg);i++)
	{
		if(szoveg[i]== c)
		{
			index++;
		}
		
	}
	if(index<0)
	{
		return index;
	}
	else
	{
		return -1;
	}
	
}

int main()
{
	
	string szoveg= "Abba";
	char c = 'b';
	printf("Az 'b' karakter utolso elofordulasa a szoban: %d\n",rfind_char(szoveg,c));
	return 0;
	
}