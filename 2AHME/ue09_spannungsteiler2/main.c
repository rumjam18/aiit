
#include <stdio.h>
#include <stdlib.h>


double liefereEingabewert (char text[], int nurPositiveWerte) {
    char s[100];
    int n;
    double rv; // return value
    
    do {
      printf("%s", text);
      fgets(s, 100, stdin);
      n = sscanf(s, "%lf", &rv);
    }while (n != 1 || nurPositiveWerte && rv < 0);
    
    return rv;
  }
  
int main () {

  printf("ue09_Spannungsteiler2\n\n");
  
  double r1 = liefereEingabewert("R1: ", 1);
 
  double r2 = liefereEingabewert("R2: ", 1);

  double ue = liefereEingabewert("Uein: ", 0);
  
  double ua = ue * r2 / (r1 + r2);
   
  printf("Uaus = %.2lf V\n", ua); 
  

  return 0;
}

