#include <stdio.h>
#include "prog1.h"
#include <string.h>

int match_ends(int n, string szoveg[])
{
	int index = n;
	for(int i = 0; i<n;i++)
	{
		if(strlen(szoveg[i]) <= 2)
		{
			index++;
		}
		else
		{
			index--;
		}
	}
	return index;
}

int main()
{
    string szavak1[] = { "aba", "xyz", "aa", "x", "bbb" };
    int szavak1_meret = 5;

    for (int i = 0; i < szavak1_meret; ++i)
    {
        puts(szavak1[i]);
    }
	puts("");
	
	printf("A megoldas: %d",match_ends(szavak1_meret,szavak1));
	
	
	
    return 0;
}