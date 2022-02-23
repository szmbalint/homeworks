#include <stdio.h>

int main()
{
	int szam=1;
	int n;
	printf("Adja meg a szamot (n): ");
	scanf("%d", &n);
	for(int i = 1; i<n;i++ )
	{
		if(szam%4==0)
		{
			printf("%d", szam);
			
		}
		else if(szam%4>0)
		{
			printf("\n");
		}
		szam++;
	}
	return 0;
}