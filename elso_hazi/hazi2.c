#include <stdio.h>

int main()
{
	int osszeg =0 ;
    for (int i = 0;i< 1000;i++)
    {
        if (i % 3 == 0)
        {
            osszeg+=i;
        }
        else if (i %5== 0)
        {
            osszeg+=i;

        }
        

    }
    printf("%d\n", osszeg);
	return 0;
}