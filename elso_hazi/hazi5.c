#include <stdio.h>

int main()
{
	int szam;
	int negativ =0;
	int pozitiv=0;
	
	while(szam!=0)
	{
		printf("Adjon meg egy szamot: ");
		scanf("%d",&szam);
		if(szam>0)
		{
			pozitiv++;
		}
		else if(szam<0)
		{
			negativ++;
		}
	}
	printf("A negativ szamok darabszama: %d\n", negativ);
	printf("A pozitiv szamok darabszama: %d\n", pozitiv);
	
	return 0;
}