#include <stdio.h>

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
	for(int i = 0;i<meret;i++)
	{
		if(i<meret-1)
		{
			printf("%d, ",tomb[i]);
		}
		else
		{
			printf("%d\n",tomb[i]);
			
		}
		
	}
}