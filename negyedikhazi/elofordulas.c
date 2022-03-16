#include <stdio.h>
#include "prog1.h"
#include <string.h>

int char_count(string szoveg, char c)
{
	int index = 0;
	for(int i = 0; i< strlen(szoveg);i++)
	{
		if(szoveg[i]== c)
		{
			index++;
		}
		
	}
	return index;
}

int main()
{
	string szoveg= "Abbbbbbbbbbbbba";
	char c = 'b';
	printf("Az 'b' karakter elofordulasa a szoban: %d\n",char_count(szoveg,c));
	return 0;
}