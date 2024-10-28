#include <stdio.h>
#include <stdlib.h>

int main() {
    int Y = 20; 
    int temp; 
    int a = 0; 
    int b = 0; 
    int g;
    int C[Y]; 
    int D[Y]; 
    int E[40];
    

    printf("Сгенерированный массив C: ");
    for (int i = 0; i < Y; i++){
        C[i]=rand() % 21;
        printf("%2d ", C[i]);
    }
    printf("\nСгенерированный массив D: ");
    for (int i = 0; i < Y; i++){
        D[i]=rand() % 21;
        printf("%2d ", D[i]);
    }
    for (int z = 0; z < Y - 1; z ++ ){ 
        for (int j = Y - 2; j >= z; j -- ){ 
            if ( C[j] > C[j + 1]){
                temp = C[j]; 
                C[j] = C[j + 1];
                C[j + 1] = temp;
            }
        }
    }
    for (int z = 0; z < Y - 1; z++ ){ 
        for (int j = Y - 2; j >= z; j-- ){ 
            if ( D[j] > D[j + 1]){
                temp = D[j]; 
                D[j] = D[j + 1];
                D[j + 1] = temp;
            }
        }
    }
    
    while (a < 20 || b < 20){
        g = a + b;
        if (a > 19){
            E[g] = D[b];
            b++;
            continue;
        }
        if (b > 19){
            E[g] = C[a];
            a++;
            continue;
        }
        if (C[a] <= D[b]){
            E[g] = C[a];
            a++;
        }
        else{
            E[g]=D[b];
            b++;
        }

    }
    printf("\nОтсортированные массивы C и D: ");
    for (int i = 0; i < 40; i++){
        printf("%2d ",E[i]);
    }
    
}
