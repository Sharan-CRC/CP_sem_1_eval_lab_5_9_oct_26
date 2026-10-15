/*Write a C program that uses functions to perform Multiplication of Two
Matrices.The input matrix A and B to be received through the main program
and the multiplication and displaying the product to be performed by the
function.*/

#include <stdio.h>

// Single function to perform multiplication and display the result
void multiplyAndDisplay(int a[3][3], int b[3][3]) {
    int result[3][3];

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            result[i][j] = 0;
            for (int k = 0; k < 3; k++) {
                result[i][j] += a[i][k] * b[k][j];
            }
        }
    }

    printf("\nProduct of the two matrices (3x3):\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d\t", result[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int a[3][3], b[3][3];

    printf("Enter elements of 3x3 Matrix A:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    printf("Enter elements of 3x3 Matrix B:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            scanf("%d", &b[i][j]);
        }
    }

    multiplyAndDisplay(a, b);

    return 0;
}
