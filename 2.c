#include <stdio.h>
#include <stdlib.h>
const N = 15;

int random(int N) {
    return rand() % N;
}

int main() {
    int A[N], a = 0, b = 10, unique[N], uniqueCount = 0;

    printf("Сгенерированный массив: ");
    for(int i = 0; i < N; i++) {
        A[i] = random(b - a + 1) + a;
        printf("%4d", A[i]);
    }

    for(int i = 0; i < N; i++) {
        int isUnique = 1;

        for(int j = 0; j < uniqueCount; j++) {
            if(A[i] == unique[j]) {
                isUnique = 0;
                break;
            }
        }

        if(isUnique) {
            unique[uniqueCount] = A[i];
            uniqueCount++;
        }
    }    

    printf("\nУникальные элементы: ");
    for(int i = 0; i < uniqueCount; i++) {
        printf("%4d ", unique[i]);
    }

}