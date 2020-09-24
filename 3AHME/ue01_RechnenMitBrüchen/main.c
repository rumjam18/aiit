
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




int main (int argc, char** argv)
{
  
  int wahl = 0;
  char s[4] = {1, 2, 3, 4};
  int z1, n1, z2, n2;
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
          break;
      case 2:       //Subtrahieren
          printf("Subtrahieren\n");
          gibBruchein("Bruch 1", &z1, &n1);
          gibBruchein("Bruch 2", &z2, &n2);
          break;
      case 3:       //Anzahl der Stellen
          printf("Anzahl der Stellen\n");
          z1 = gibGanzeZahlEin("Ihre Zahl");
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
    }
  }
  while(wahl != 4);

  return (EXIT_SUCCESS);
}

