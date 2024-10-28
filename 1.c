#include <stdio.h>
#include <math.h>
const N = 100;

double calc_y(double a, double b, double c, double x) {
    return a * x * x * sin(x) + b * x + c;
}

void bubbles(double array[], int n) {
    for(int i = 0; i < n - 1; i++) {
        for(int j = 0; j < n - i - 1; j++) {
            if(array[j] < array[j + 1]) {
                double temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }
}

int main() {
    double A[N], a = 2.14, b = -4.21, c = 3.25, xB = -4.5, xE = -33.5, h = 0.5;
    int count = 0;

    for(double x = xB; xB >= xE; x -= h) {
        if(count < N){
            A[count] = calc_y(a, b, c, x);
            count++;
        }
        else { 
            break;
        }
    }

    bubbles(A, count);
    printf("Отсортированный массив:\n");
    for (int i = 0; i < count; i++) {
        printf("%.2f\n", A[i]);
    }
}