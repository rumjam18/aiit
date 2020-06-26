#include <stdio.h>

int main () {
    
    int w[16][16];  
    
    printf("ue15 Kleines_1x1:\n");
    
    for (int i = 0; i < 16; i++) {
        for (int j = 0; j < 16; j++) {
            w[i][j] = i * j;
        }
    }
    
    printf("\nIn Dezimal:\n\n");
    printf("    |");
    for (int i = 1; i <= 10; i++) {
        printf("%4d |", i);
    }
    printf("\n");
    printf("-----------------------------------------------------------------");
    printf("\n");
            
    for (int i = 1; i <= 10; i++) {
        printf("%3d |", i);
        for (int j = 1; j <= 10; j++) {
            printf("%4d |", w[i][j]);
        }
        printf("\n");
    }
    
    printf("\n\nIn Oktal:\n\n");
    printf("    |");
    for (int i = 1; i <= 8; i++) {
        printf("%4o |", (unsigned)i);
    }
    printf("\n");
    printf("-----------------------------------------------------");
    printf("\n");
            
    for (int i = 1; i <= 8; i++) {
        printf("%3o |", (unsigned)i);
        for (int j = 1; j <= 8; j++) {
            printf("%4o |", (unsigned)w[i][j]);
        }
        printf ("\n");
    }
        
    printf("\n\nIm Hex-System:\n\n");
    printf("    |");
    for (int i = 1; i <= 15; i++) {
        printf("%4x |", (unsigned)i);
    }
    printf("\n");
    printf("-----------------------------------------------------------------------------------------------");
    printf("\n");
    
    for (int i = 1; i <= 15; i++) {
        printf("%3X |", (unsigned)i);
        for (int j = 1; j <= 15; j++) {
            printf("%4X |", (unsigned)w[i][j]);
        }
        printf("\n");
    }
    
    return 0;
    }

