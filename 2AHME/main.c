
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void ausgabe(char namensliste[][100]) {
  
  int i;     
  for(i = 0; i < 11; i++) {
    
    printf("%s\n", namensliste[i]);
  }
  
}

void bubblesort(char namensliste[][100]){
  char tmp[100];
  
  for(int i  = 0; i < 11 - 1; i++){
    for(int j = 0; j < 11 - 1 - i; j++){
      if(strcmp(namensliste[j], namensliste[j + 1]) > 0) {
        
        strcpy(tmp, namensliste[j]);
        strcpy(namensliste[j], namensliste[j + 1]);
        strcpy(namensliste[j + 1], tmp);
      }
    } 
  }
}


int main ()
{
  int i,j;
  char tmp[100];

  char namensliste[11][100] = {"Fabio", "Oliver","Jakob K.","Jakob R.","Jan","Sebastian S.","Matteo","Sebastian P.","Elias H.","Elias K.","Tobias" };
  printf("\nGegebene Namen: \n");
  ausgabe(namensliste);
  bubblesort(namensliste);
 printf("\nSortierte Namen: \n");
  ausgabe(namensliste);
  return 0;
}

