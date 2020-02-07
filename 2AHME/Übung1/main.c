#include <stdio.h>
#include <stdlib.h>

int main() 
{
  char a[90];
  double radius1;
  //double radius2;
  double wert;
  
  //double add;
  //double mul;
  
  printf("Übung1");
  printf("---------------\n\n");
  
  //printf("   Zahl1:  ");
  //fgets(a, 90,stdin);
  //sscanf(a,"%lf", &radius1);
  //printf("radius=%f\n", radius1);
  
  //printf("     Zahl2:   ");
 //fgets(a, 90, stdin);
  //sscanf(a,"%lf", &radius2);
  //printf("radius2=%f\n", radius2);
  
  printf("Rechnungswert: ");
  fgets(a, 90, stdin);
  sscanf(a, "%lf", &wert);
  
  if(wert < 0)
  {
  printf("Eingabefehler\n");
  return 1;
  }
 
 
  if(wert >= 20)
  {
    radius1 = wert  + 5;
  }else if(wert >= 10)
  { 
    radius1 = wert  +2;
  } else if(wert >= 5)
  {
    radius1 = wert  +1;
  } else if(wert<=5)
  {
    radius1 = wert * 10;
  }
  else {
    radius1 = 0;
  }
  printf("radius1: %lf", radius1);
  
  //add = radius1+radius2;
  //mul = radius1*radius2;
  
 //printf("Ergebnis\n");
  //printf("-----------\n");
 //printf("  radius1+radius2=%4f\n", add);
 //printf("  radius1 * radius2 = %4f\n", mul);
  
  
  
  return (0);
}

