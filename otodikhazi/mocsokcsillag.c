#include <stdio.h>

int main(){

   //int szam;
   char szo;
   //int adatok[100];
   char seged[100];
   //int szamtomb[100];
   char szavak[100];
   int darab = 0;
   int szamlalo = 0;
   //--------
	printf("a szo: ");
	fgets(szavak,100,stdin);
	szamlalo = szamlalo + 1;
   while(szo != '*')
   {
		printf("a szo: ");
		scanf("%c",&szo);
		fgets(szavak,100,stdin);
		szamlalo = szamlalo + 1;
   }
    		
	
   //------
   printf("%d db szot adtal meg! ",szamlalo-1);

   
    return 0;

}