#include <stdio.h>
#include <stdlib.h>

int magassag()
{
	int szam;
	do
	{
		printf("Adjon meg egy pozitiv paratlan egeszt: ");
		scanf("%d",&szam);
	}while((szam<0)&&(szam%2>0));
    return szam;
}
int main()
{
	int szam=magassag();
	int  i, k;	//(szam)n c(i) k
	
	for (k = 1; k <= szam/2+1; k++)
	{
		for (i = 1; i <= szam-k; i++)
		printf(" ");
	
		for (i = 1; i <= 2*k-1; i++)
		printf("#");
	
		printf("\n");
		
	}

	for (k= 1; k <= szam/2; k++)
	{
		/*for (i = 1; i <= k; i++)
		printf(" ");

		for (i = 1 ; i <= 2*(szam-k); i++)
		printf("#");*/
		for (i = 1; i <=k+(szam/2); i++)
		{
		printf(" ");
		
		}
	
		for (i = 1; i <= 2*((szam/2+1)-k)-1; i++)
		{
		printf("#");
		}
		printf("\n");
	}

		return 0;
}
