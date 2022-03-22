#include <stdio.h>

int main(){

   int szam;
   int adatok[100];
   int szamtomb[100];
   int darab = 0;
   int szamlalo = 0;
   //-------
   for (int i = 0; i < 100; i++)
   {
       adatok[i] = 0;
       szamtomb[i] = 0;
   }
   printf("\nSzam: ");
   scanf("%d", &szam);
   //--------
   while (szam != 0 && szam < 99)
   {
       szamtomb[szamlalo] += szam;
       szamlalo++;
       adatok[szam]++;
       printf("Szam: ");
       scanf("%d", &szam);  
   }    
   //-------
   for (int k = 0 ; k < 100 ; k++)
   {
       if(adatok[k] != 0)
       {
           darab++;
       }
   }
   //------
   printf("Ennyi kulonbozo szam: %d!\n", darab);
   printf("novekvo: ");
   
   for(int g = 0 ; g < szamlalo ; g++)
   {
       if(szamtomb[g] != szamtomb[g+1])
       {
           printf("%d ", szamtomb[g]);
       }
   }
   
    return 0;

}