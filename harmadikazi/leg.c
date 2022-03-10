#include <stdio.h>

int legnagyobb(int meret, int tomb[])
{
	int nagy;
	int j = 0;
	for(int i = 0; i <=meret;i++)
	{
		if(tomb[i]>=j)
		{
			j = tomb[i];
		}
	}
	return j;
}


int main()
{
	int meret = 5;
	int tomb[meret];
	int m = 0;
	for(int i = 0; i<meret;i++)
	{
		printf("Adja meg a %d. szamot: ",m);
		scanf("%d",&tomb[i]);
		m++;
	}
	printf("A tomb elemei: ");
	for(int i = 0; i <meret; i++)
	{
		printf("%d ",tomb[i]);
	}
	printf("\nA tomb legnagyobb eleme: %d", legnagyobb(meret, tomb));
	return 0;
}