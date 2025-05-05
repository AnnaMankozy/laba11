#include <stdio.h>
#include <stdlib.h>
#define N1 15
#define N2 20

void vvodMatrixN1(float m[][N1], int size, char name) {
    for (int i = 0; i < size; i+=1) {
        for (int j = 0; j < size; j+=1) {
            printf("Введіть %c[%d][%d] = ", name, i+1, j+1);
            scanf("%f", &m[i][j]);
        }
    }
}

void vvodMatrixN2(float m[][N2], int size, char name) {
    for (int i = 0; i < size; i+=1) {
        for (int j = 0; j < size; j+=1) {
            printf("Введіть %c[%d][%d] = ", name, i+1, j+1);
            scanf("%f", &m[i][j]);
        }
    }
}

float sumBelowDiagonalN1(float m[][N1], int size) {
    float sum = 0;
    for (int i = 1; i < size; i+=1) {
        for (int j = 0; j < i; j+=1) {
            sum += m[i][j];
        }
    }
    return sum;
}

float sumBelowDiagonalN2(float m[][N2], int size) {
    float sum = 0;
    for (int i = 1; i < size; i+=1) {
        for (int j = 0; j < i; j+=1) {
            sum += m[i][j];
        }
    }
    return sum;
}

int main() {
    system("chcp 65001");

    float a[N1][N1];
    float b[N2][N2];

    printf("Введення матриці A (%dx%d):\n", N1, N1);
    vvodMatrixN1(a, N1, 'A');

    printf("Введення матриці B (%dx%d):\n", N2, N2);
    vvodMatrixN2(b, N2, 'B');

    float sumA = sumBelowDiagonalN1(a, N1);
    printf("Сума елементів нижче головної діагоналі матриці A: %.2f\n", sumA);

    float sumB = sumBelowDiagonalN2(b, N2);
    printf("Сума елементів нижче головної діагоналі матриці B: %.2f\n", sumB);

    return 0;
}