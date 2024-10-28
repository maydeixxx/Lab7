#include <stdio.h>
#include <stdlib.h>

int main() {
    float A[20]; 
    int count = 0; 
    int x = 0;
    float B[count];

    printf("Сгенерированный массив: ");

    for(int i = 0; i < 20; i++) {
        A[i] = ((float) rand() / RAND_MAX) * 20 - 10;
        if(A[i] >= 0) {
            count++;
        }
        printf("%.3f", A[i]);
    }
    printf("\nМассив B: ");
    for(int i = 0; i < 20; i++) {
        if(A[i] >= 0) {
            B[x] = A[i];
            printf("%.3f", B[x]);
            x++;
        }
    }

}
