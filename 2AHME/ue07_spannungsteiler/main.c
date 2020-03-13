#include <stdio.h>

int main () 
{
  char s[100];
  int n;
  double r1;   // oberer widerstand
  double r2;   // untererwiderstand
  double ue;   //Eingangasspannungs
  double ua;   //Ausgangsspannung
  
  printf("UE07 - Spannungsteiler\n");
  
  do {
    printf(" Widerstand R1:");
    fgets (s, 100, stdin);
    n = sscanf(s, "%lf", &r1);
    
  }while(n != 1 || r1 < 0);
  
  do {
    printf(" Widerstand R2:");
    fgets (s,100, stdin);
    n = sscanf(s, "%lf", &r2);
  }while(n != 1 || r2 < 0);
  
  
  while (1) {
    printf(" Eingangsspannung Ue:");
    fgets (s,100,stdin);
    n = sscanf(s, "%lf", &ue);
  
    if(n == 1 ) {
      break;
    }
    printf("Fehlerhaften Eingabe, bitte korrigiren\n");
  
  }
  if (r1 == 0 && r2 == 0) {
    printf("Berechnen nicht moeglich!\n");
  } else {
    ua = ue * r2 / (r1 + r2);
    printf("\nAusgangsspannung: %.2lfV\n", ua);
  }
  
   //printf(" Widerstand R1: %.2lf\n", r1);
  //printf(" Widerstand R2: %.2lf", r2);
  //printf(" Eingangsspannug: %.2lf", ue);
  return 0;
}

