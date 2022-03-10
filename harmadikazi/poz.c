#include <stdio.h>
#include <stdlib.h>

int main()
{
	int meret = 5;
	int tomb[meret];
	int m = 1;
	for(int i = 0; i<meret;i++)
	{
		printf("Adja meg a %d. szamot: ",m);
		scanf("%d",&tomb[i]);
		m++;
	}
	printf("A tomb elemei: ");
	for(int i = 0; i < meret; i++)
	{
		printf("%d ",tomb[i]);
	}
	printf("\nA tomb elemeinek abszolut erteke: ");
	for(int i = 0; i<meret;i++)
	{
		printf("%d ",abs(tomb[i]));
	}
}