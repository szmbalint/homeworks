#include <stdio.h>

int main()
{
	int n1;
	int n2;
	char jel;
	while(1)
	{
		printf("Adja meg az n1 szamot: ");
		scanf("%d", &n1);
		printf("Adja meg az n2 szamot: "),
		scanf("%d", &n2);
		if(n1 < n2)
		{
			printf("\n<");
			break;
		}
		else if(n1 > n2)
		{
			printf("\n>");
			break;
		}
		else if(n1==n2)
		{
			printf("\n=");
			break;
		}
	}
	
	return 0;
}