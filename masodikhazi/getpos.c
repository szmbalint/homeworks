#include <stdio.h>
int get_positive_int()
{
    int szam;
    do
	{
		printf("Adjon meg egy pozitiv egeszt: ");
		scanf("%d",&szam);
	}while(szam<0);
    return szam;
}
int main()
{
	int szam = get_positive_int();
	printf("\n");
	printf("A szam: %d\n",szam);
	return 0;

}