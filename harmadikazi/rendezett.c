#include <stdio.h>

int rendez(int meret, int tomb[])
{
	int helyes = 0;
	int helytelen = 0;
	
	for(int i = 0; i<=meret-1;i++)
	{
		if(tomb[i]<=tomb[i+1])
		{
			helyes++;
		}
		else
		{
			helytelen++;
		}
	}
	if(helyes==meret)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

int main()
{
	int meret = 10;
	int tomb[meret];
	int m = 0;
	for(int i = 0; i<=meret;i++)
	{
		printf("Adja meg a %d. szamot: ",m);
		scanf("%d",&tomb[i]);
		m++;
	}
	printf("A tomb elemei: ");
	for(int i = 0; i <= meret; i++)
	{
		printf("%d, ",tomb[i]);
	}
	printf("\nA tomb rendezett? %s",rendez(meret, tomb) ? "Igen" : "Nem");
	return 0;
}