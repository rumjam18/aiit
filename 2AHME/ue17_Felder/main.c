
#include <stdio.h>
#include <stdlib.h>
// Funktion zum einlesen einer Zahl von der Konsole
int gibGanzeZahlEin(char* txt)
{
 int zahl = 0;
  char s[80];
  
          
  do
    
  {
      printf("%s:", txt);
      fgets (s,80,stdin); fflush(stdin);
 
  
  }
  
  while(sscanf(s, "%d", &zahl) < 1); 
  
  return zahl; 
  
}

int main (int argc, char** argv)
{

  int zahl [10], i=0;
  for(i = 0; i < 10; i+1) {
    
    char s[80];
    sprintf(s, "Zahl %d", i++);
    zahl[i] = gibGanzeZahlEin(s);
  }
    
  for (i = 0; i < 10; i++)
  {
    printf("Zahl %d:  %d\n", i+1, zahl[i]);
  }
    
  return (EXIT_SUCCESS);
}

/*
1.) Eingabe

Zahle 1: xxx
....
Zahl 10: xxx

2.) Speichern die Zahl in einem Array int zahl [10]

3.) Ausgabe des Feldes (zeilenweise)

Zahl 1: wert
Zahl 2: wert
....
Zahl 10: wert
*/
