#include <stdio.h>

int main()
{
	int magassag;
	printf("Adja meg a magassagot: ");
	scanf("%d", &magassag);
	for (int i = 1; i <= magassag; i++)
	{
		for (int j = 1; j <= magassag-i; j++)
		{
			printf(" ");
		}
		for (int k = 1; k <=i; k++)
		{
			printf("#");
		}
		printf("  ");
		for(int l = 1;l<=i;l++)
		{
			
			printf("#");
		}
		printf("\n");
    
	}
	
	return 0;
}