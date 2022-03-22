#include <stdio.h>
#include <stdlib.h>
#include <time.h>
  
void randomf(int lower, int upper, 
                             int count)
{
    int i;
    for (i = 0; i < count; i++) {
        int num = (rand() %
           (upper - lower + 1)) + lower;
        printf("%d ", num);
    }
}

int main()
{
    int min;
	int max;
	int darab;
	printf("hany szam? ");
	scanf("%d",&darab);
	printf("Also hatar: ");
	scanf("%d",&min);
	printf("felso hatar: ");
	scanf("%d",&max);
	printf("a generalt szamok: ");
    srand(time(0));
  
    randomf(min, max, darab);
  
    return 0;
}