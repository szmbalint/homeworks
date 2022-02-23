#include <stdio.h>

int main()
{
	int szam;
	int n;
	printf("Ajda meg a szamot (n): ");
	scanf("%d", &n);
	for(int i = n; i > 0;i--)
	{
		if(n%2>0)
		{
			printf("%d\n", n);
		}
		n--;
	}
	return 0;
}