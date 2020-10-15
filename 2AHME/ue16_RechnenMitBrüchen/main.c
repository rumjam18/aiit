
#include <stdio.h>
#include <stdlib.h>

int gibGanzeZahlEin(char *ptxt)
{
  int zahl = 0;
  char s[40];
  
  printf("%s:", ptxt);
          
  do
    
  {
    
      fgets (s,40,stdin); fflush(stdin);
      fflush(stdin);
  
  }
  
  while(sscanf(s, "%d", &zahl) !=1); 
  
  return zahl;
  
  
}

void gibBruchein(char *ptxt, int *pzaehler, int *pnenner)
{
  printf("%s\n", ptxt);
  *pzaehler = gibGanzeZahlEin("Zaehler");
  *pnenner = gibGanzeZahlEin("Nenner");
  
}
void clrscr () //löschen des Bildschirmes
{
  system("clear");
}

void gibMenueAus ()
{
  clrscr();
  
  printf("Rechnen mit Brüchen\n"
         "=============================================\n"
         "Addition zweier Brueche.....................1\n"
         "Subtraktion zweier Brueche..................2\n"
         "Anzahl der Stellen einer Zahle berechnen....3\n"
         "Programmende................................4\n");
}
void addiereBrueche(int z1,int n1,int z2,int n2, int *ze, int *ne) {
  
   *ze = (z1 * n2) + (z2 * n1);
   *ne = n1 * n2;
  
}
void subtrahiereBrueche(int z1,int n1,int z2,int n2, int *ze, int *ne) {
   *ze = (z1 * n2) - (z2 * n1);
   *ne = n1 * n2;
   
}

void gibBruchAus(char *txt, int ze, int ne) {
  kuerzen(&ne, &ze);
  int stellenzaehler = berechneStellenAnzahl(ze);
  int stellennaenner = berechneStellenAnzahl(ne);
  int stellenMax;
  
  if(stellenzaehler > stellennaenner) {
    stellenMax = stellenzaehler;
  } else {
    stellenMax = stellennaenner;
  }
  printf("%s:\n", txt);
 
   if(stellenzaehler < stellennaenner) {
    int differenz = stellennaenner - stellenzaehler; 
    while(differenz > 0) {
      printf(" ");
      differenz = differenz - 1;
    }
    printf("%d\n", ze);
  } else {
    printf("%d\n", ze);
  }
  
  for (int i = 0; i < stellenMax; i++) {
    printf("-");
  }
  printf("\n");
  if(stellenzaehler > stellennaenner) {
    int differenz = stellenzaehler - stellennaenner; 
    while(differenz > 0) {
      printf(" ");
      differenz = differenz - 1;
    }
    printf("%d", ne);
  } else {
    printf("%d", ne);
  }
}


int ggT(int a, int b) {
  
  if (a < 0) {
      a = -a;
  }
  
  if (b < 0) {
      b = -b;
  }
      if ( (a == 0) || (b == 0) ) {
        return 1;
      }
  
  
  while ( a != b) {
    if ( a > b) {
          a = a - b;
    } else {
      
          b = b - a;    
    }
     
  }
  return a;
}

void kuerzen (int *ze, int *ne) {
  int teiler = ggT(*ze, *ne);
  *ze = *ze / teiler;
  *ne =*ne / teiler;
}


int berechneStellenAnzahl(int n) {
  int stellen;
  int rv;
  for(stellen = 1; n >= 10; stellen++) {
    n = n / 10;
  }
  
  if( n < 0 ) {
    stellen = stellen + 1;
  }
  
  rv = stellen;
  
  return rv; 
  
}

void stellenAusgabe(int n) {
  int stellen = berechneStellenAnzahl(n);
  printf("Stellen\n");
  printf("%d", stellen);
}


int main (int argc, char** argv)
{
  
  int wahl = 0;
  char s[4] = {1, 2, 3, 4};
  int z1, n1, z2, n2;
  int ze = 0;
  int ne = 0;
  do
  {
    gibMenueAus();
    //Menüfunktion auswahl
    
    wahl = gibGanzeZahlEin("Waehle die Funktion (1-4)");
    switch(wahl)
    {
      case 1:       //Addieren
          printf("Addieren\n");
          gibBruchein("Bruch 1", &z1, &n1);
          gibBruchein("Bruch 2", &z2, &n2);
          addiereBrueche(z1,n1,z2,n2, &ze, &ne);
          ggT(ze,ne);
          gibBruchAus ("Ergebnis", ze , ne);
          
          break;
      case 2:       //Subtrahieren
          printf("Subtrahieren\n");
          gibBruchein("Bruch 1", &z1, &n1);
          gibBruchein("Bruch 2", &z2, &n2);
          subtrahiereBrueche(z1,n1,z2,n2, &ze, &ne);
          ggT(ze,ne);
          gibBruchAus ("Ergebnis", ze , ne);
          
          break;
      case 3:       //Anzahl der Stellen
          printf("Anzahl der Stellen\n");
          z1 = gibGanzeZahlEin("Ihre Zahl");
          stellenAusgabe(z1);
          break;
      case 4:       //Programmende
          printf("Pragmmende\n");
          break;
      default:       //ungueltig
          printf("Die Auswahl %d is ungültig!", wahl);
          break;
    }
    if (wahl != 4)
    {
          //warten bis der benutzer fortfahrt.
          fgets (s,40,stdin); fflush(stdin);
          fflush(stdin);
    }
  }
  while(wahl != 4);

  return (EXIT_SUCCESS);
}

