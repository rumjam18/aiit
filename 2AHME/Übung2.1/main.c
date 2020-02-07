
#include <stdio.h>
#include <stdlib.h>

int main ()
{
  char  j[90];
  double zahl1;
  double zahl2;
  double zahl3;
  double Ergebnis;
  printf("Übung2.1\n");
  printf("--------\n\n");
  
  printf("Zahlenwert1: ");
  fgets(j, 90, stdin);
  sscanf(j, "%lf", &zahl1);
  
   printf("Zahlenwert2: ");
  fgets(j, 90, stdin);
  sscanf(j, "%lf", &zahl2);
  
  printf("Zahlenwert3: ");
  fgets(j, 90, stdin);
  sscanf(j, "%lf", &zahl3);

  if (zahl1 < 0) {
    printf("Fehlerhaft\n");
    return 1;
  } 
  if (zahl2 < 0) {
    printf("Fehlerhaft\n");
    return 1;
  }
  if (zahl3 < 0) {
    printf("Fehlerhaft\n");
    return 1;
  }
  
  if (zahl1 >= 5000) {
    Ergebnis = zahl1 + zahl2;
  } else if(zahl1 >= 1000) {
    Ergebnis = zahl1 - zahl2;
  } else if(zahl1 >= 100) {
    Ergebnis = zahl1 / zahl2; 
  } else if(zahl1 == 50) {
    Ergebnis = zahl2 + zahl3;
  } else { 
    Ergebnis = 0;
  
  }        
  printf("Ergebnis: %.2f", Ergebnis);
  
 
  
  
  return 0;
}

