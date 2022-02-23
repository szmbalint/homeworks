#include <stdio.h>

int main()
{
	int darab=0;
	int szam;
	while(szam!=0)
	{
		printf("Adjon meg egy szamot (vege:0): ");
		scanf("%d", &szam);
		if(szam>0)
		{
			darab+=1;
		}
		
		
	}
	printf("poz. szamok darabszama: %d",darab);
	return 0;
}