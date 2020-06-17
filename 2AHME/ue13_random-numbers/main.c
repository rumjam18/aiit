
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int intRandom (int min, int max) {
     
    int rv;
    printf("5:");
    for (int i = 0; i < 50; i++) {
        printf(" %d", rand() % ( max  - min + 1)  + min);
    }
    printf("\n");
    
    return rv;
}
int doubleRandom (double min, double max) {
     
    int rv;
    printf("6:");
    for (int i = 0; i < 50; i++) {
        printf(" %f",  ( max  - min ) * rand() / RAND_MAX +  min);
    }
    printf("\n");
    
    return rv;
} 
int main () {
    
    srand(time(NULL));
    /*
    printf("Zufallszahlen 0 .. %d\n", RAND_MAX);
    
    // rand() > liefert Zufalls Ganzzahl von 0 .. RAND_MAX
    printf("1:");
    for (int i = 0; i < 5; i++) {
        printf(" %d", rand());
    }
    printf("\n");
    
    // 0 .. RAND_MAX -> 0 ..100
    // Modulo Operator % 104 / 101 - 1, 104 % 101 -3
     printf("2:");
    for (int i = 0; i < 5; i++) {
        printf(" %d", rand() % 101 );
    }
    printf("\n");
    
    // 0 .. RAND_MAX -> 1 .. 6 (Wuerfel);
    // rand() % 6 -> 0 .. 5 -> +1 -> 1 .. 6
     printf("3:");
    for (int i = 0; i < 28; i++) {
        printf(" %d", rand() % 6 + 1);
    }
    printf("\n");
    
    // -1000 .. +1000 -> 0 ..2000 -> % 2001
    
     printf("4:");
    for (int i = 0; i < 5; i++) {
        printf(" %d", rand() % 2001 -1000);
    }
    printf("\n"); */
    
    int minIntZufallsZahl = 2;
    int maxIntZufallsZahl =  5;
    intRandom (minIntZufallsZahl, maxIntZufallsZahl);
    
    
    double minDoubleZufallsZahl = 2;
    double maxDoubleZufallsZahl =  5;
    doubleRandom (minDoubleZufallsZahl, maxDoubleZufallsZahl);
    
    
    return 0;
}

