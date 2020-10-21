
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int gibZahlenEin(double f[]) {
  char s[100];
  double zahl;
  int i = 0;
 
  
  do {
    do{
      printf("Zahl %d: ", i);
      fgets (s,100,stdin); fflush(stdin);
       
    }while
      (sscanf(s, "%lf", &zahl) < 1);
    
    if ( zahl >= 0) 
    {
      f[i] = zahl;
      i++;
    }
    
      
  }while ( i < 1000 && zahl > 0); 
  
  return i; 
  
}

double berechneMittelwert(double f[], int anzahl) {
  
  double mittlererWert;
  double aS;
  double nS;
  double speicherWert = 0;
  
  for(int i; i <= anzahl; i++) {
    f[i] = speicherWert;
    nS = aS + speicherWert;
    aS = nS;
  }
  mittlererWert = nS / anzahl;
  
  return mittlererWert;
}

double berechneStdAbw(double f[], int anzahl, double mittlererWert) 
{
  double speicherWert;
  double Abw;
  
  
  for(int i = 0; i < anzahl; i++) {
  speicherWert = speicherWert + ((f[i] - mittlererWert) ^ 2);
  }
  Abw = sqrt(speicherWert / anzahl);
  
  return Abw;
}
 

int main ()
{
  double f[999];
  double Abw;
  double mittlererWert;
  int anzahl;
  
  anzahl = gibZahlenEin(f);
  mittlererWert = berechneMittelwert(f, anzahl);
  Abw = berechneStdAbw(f, anzahl, mittlererWert);
  
  printf("Mittelwert: \n %lf", mittlererWert);
  printf("Standartabweichung: \n %lf", Abw);
  

  return 0;
}

