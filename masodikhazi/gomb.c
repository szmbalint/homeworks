#include <stdio.h>
#include <math.h>
double get_double()
{
    double szam;
    while(1)
    {
        printf("Adjon meg egy poz egesz szamot: ");
        scanf("%lf", &szam);
        if (szam>0)
        {
            break;
        }
        
    }
    return szam;
}
double terfogat(double szam)
{
	double resz = (4*(szam*szam*szam)*M_PI);
    return resz/3;
	
}
double felszin(double szam)
{
    return (4*(szam*szam))*M_PI;
}
int main(){

    double sugar = get_double(); 
	//printf("%lf",M_PI);
    printf("\n");
    printf("terfogata: %lf cm3\n",terfogat(sugar));
    printf("felszine: %lf cm2\n",felszin(sugar));
return 0;

}