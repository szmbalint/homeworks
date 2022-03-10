#include <stdio.h>

int is_even(int n)
{
	if(n % 2 == 0)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}


int main()
{
	int szam;
	printf("Adjon meg egy szamot: ");
	scanf("%d",&szam);
	printf("A szam %s",is_even(szam) ? "paros" : "paratlan");
	
	
	return 0;
}