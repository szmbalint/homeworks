#include <stdio.h>

int swap(int tomb[])
{
	int i =0;
	int j =2;
	int tmp;
	while(i<j)
	{
		tmp = tomb[i];
		tomb[i] = tomb[j];
		tomb[j] = tmp;
		i++;
		j--;
	}
}
int valid_triangle(int aoldal, int boldal, int coldal,int tomb[])
{
	if(aoldal <= 0)
	{
		printf("Az 'a' szam negativ vagy 0!");
	}
	else if(boldal<=0)
	{
		printf("Az 'b' szam negativ vagy 0!");
	}
	else if(coldal<=0)
	{
		printf("Az 'c' szam negativ vagy 0!");
	}
	swap(tomb);
	if(tomb[1] + tomb[2] >= tomb[3])
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
	int a;
	int b;
	int c;
	int tomb[3];
	printf("Adja meg 'a' hosszat: ");
	scanf("%d",&a);
	printf("Adja meg 'b' hosszat: ");
	scanf("%d",&b);
	printf("Adja meg 'c' hosszat: ");
	scanf("%d",&c);
	tomb[1] = a;
	tomb[2] = b;
	tomb[3] = c;
	printf("A haromszog megszerkesztheto? %s",valid_triangle(a,b,c,tomb) ? "igaz" :"hamis");
	return 0;

}