
#include <stdio.h>
#include <stdlib.h>

int main ()
{
  char a[100];
  double laenge;
  double breite;
  double flaeche;
  double grundstueckspreis;
  double quatratmeterpreis;
  double umfang;
  
  printf("Übung2.3\n");
  printf("-------\n\n");
  
  printf("Länge: ");
  fgets(a, 100, stdin);
  sscanf(a, "%lf", &laenge);
  
   printf("Breite: ");
  fgets(a, 100, stdin);
  sscanf(a, "%lf", &breite);
  
   printf("Quatratmeterpreis: ");
  fgets(a, 100, stdin);
  sscanf(a, "%lf", &quatratmeterpreis);
  
  if (laenge <= 0 || breite <= 0 || quatratmeterpreis <= 0) {
    printf("Fehlerhaft\n");
    return 1;
  }
  
  flaeche = laenge * breite;
  
  umfang = (laenge + breite) * 2;
  
  grundstueckspreis = flaeche * quatratmeterpreis;
  
  printf("\nFläche: %.2f\n", flaeche); 
  printf("Umfang: %.2f\n", umfang);
  printf("Grundstückspreis: %.2f\n", grundstueckspreis);
  
  
  if (flaeche >= 100) {
    printf("Genemigung benötigt ");
    
  } else 
  { printf("Genemigung nicht benötigt ");
  
  }
          
  
  
  
  return 0;
}

