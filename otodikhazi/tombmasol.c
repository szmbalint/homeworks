#include <stdio.h>
#include "prog1.h"
#include <string.h>
#include <stdlib.h>

int main()
{
	int darab;
	int i = 0;
	int hanyadik = 1;
	printf("hany szam: ");
	scanf("%d",&darab);
	int tomb[darab];
	while(i<darab)
	{
		
		printf("%d. szam: ",hanyadik);
		scanf("%d",&tomb[i]);
		i = i + 1;
		hanyadik = hanyadik + 1;
		
	}
	
	printf("\nA bevitt szamok absz. erteke: ");
	for(int i = 0; i<darab;i++)
	{
		printf("%d ",abs(tomb[i]));
	}
	printf("\nA bevitt szamok: ");
	for(int i = 0; i<darab;i++)
	{
		printf("%d ",tomb[i]);
	}
	
	
	
	
	return 0;
}