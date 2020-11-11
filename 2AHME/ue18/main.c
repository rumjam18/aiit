
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define MAX_WINDOW_SIZE 100
#define MDATA_MAX_SIZE 1000
  
  double getSinusWithNoise(double f[], int length, double lenght_periode, double amplitude, double offset, double amplitude_noise) {
  
  for (int i = 0; i < lenght; i++) {
   
    f[i] =  amplitute * sin(2 * M_PI /  lenght_periode * i ) + offset + (rand() % 100) * amplitude_noise/100;
    
  return 0;
  
  }
  
  double removeOffset(double f[], int length) {
    double summe = 0;
    double offset = 0;
    
    for (int i = 0; i < lenght; i++)
      
      summe += f[i];
    
    offset = summe  / lenght; 
    
    for (int i = 0; i < lenght; i++) {
      
      f[i] -= offset; 
    }
    return offset;
  }
  
  void calcMovingAveraging(double f[], int length)
  
  double f[999];
  double f1[999];
  double summe = 0;
  int n = 10;
  int j = 0;
    
    for(int i < 1000; i++) {
        
        for(j <= n; j++){
            
           f1[i] = f1[i] + f[j];
        }
        
     j++;
     n++;
    
    }

    return 0;
}

  
  
  
  int main () {
    
    getSinusWithNoise;
    
    double mdata [MDATA_MAX_SIZE];
    double offset = 0.0;
    
    getSinusWithNoise(mdata, MDATA_MAX_SIZE, 100.0, 2.0, 1.0, 0.0);
    offset = removeOffset(mdata, MDATA_MAX_SIZE);
    
    if (offset == 1.0)
      printf("HuHu\n");
    else
      printf("Offset-Differenz %3.2f\n", 1.0 - offset);
    
    calcMovingAveraging;
    
    return 0;
  }
  
  
   
  
  
          
           
  