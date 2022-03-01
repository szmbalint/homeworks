#include <stdio.h>
#include <math.h>
#include <stdbool.h>

float kerulet(int szam)
{
    return 2*szam*M_PI;
}
float terulet(int szam)
{
    return szam*szam*M_PI;
}
int main(){

    int sugar; 
    printf("egy sugara: ");
    scanf("%d",&sugar);
    printf("\n");
    printf("kerulete: %f cm\n",kerulet(sugar));
    printf("terulete: %f cm2\n",terulet(sugar));
return 0;

}