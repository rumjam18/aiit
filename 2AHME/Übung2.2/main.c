
#include <stdio.h>
#include <stdlib.h>

int main ()
{ 
  char a[100];
  double zahl1;
  double zahl2;
  double add;
  double sub;
  double mul;
  double div;
  
  printf("Übung2.2\n");
  printf("------\n\n");
  
  printf("Rechenwert1: ");
  fgets(a, 100, stdin);
  sscanf(a, "%lf", &zahl1);
  printf("zahl1=%.2f\n", zahl1);
  
  printf("Rechenwert2: ");
  fgets(a, 100, stdin);
  sscanf(a, "%lf", &zahl2);
  printf("zahl2 = %.2f\n", zahl2);
  
  add = zahl1 + zahl2;
  mul = zahl1 * zahl2;
  
  printf("Ergebnis: \n");
  printf("----------\n");
  printf("zahl1 + zahl2 = %.4f\n", add);
  printf("zahl1 * zahl2 = %.4f\n", mul);
  
  
  

  return 0;
}

