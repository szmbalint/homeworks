#include <stdio.h>

int main()
{
	int szam;
	int osszeg=0;
	while(1)
	{
		
		if (szam!=0)
		{
			printf("Adjon meg egy szamot (vege:0): ");
			scanf("%d",&szam);
			osszeg=osszeg+szam;
		}
		else if(szam==0)
		{
			break;
		}
	}
	printf("Az osszeg: %d", osszeg);
	return 0;
}