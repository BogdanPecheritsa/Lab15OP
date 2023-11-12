#include <stdio.h>
#include <windows.h>

void sortEvenRows(int matrix[100][100], int n) {
    for (int i = 1; i < n; i += 2) {
        for (int j = 0; j < n - 1; j++) {
            for (int k = 0; k < n - j - 1; k++) {
                if (matrix[i][k] > matrix[i][k + 1]) {
                    int temp = matrix[i][k];
                    matrix[i][k] = matrix[i][k + 1];
                    matrix[i][k + 1] = temp;
                }
            }
        }
    }
}

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int n;

    printf("¬вед≥ть розм≥рн≥сть матриц≥: ");
    scanf_s("%d", &n);

    int matrix[100][100];

    printf("¬вед≥ть елементи матриц≥:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf_s("%d", &matrix[i][j]);
        }
    }

    sortEvenRows(matrix, n);

    printf("¬≥дсортована матриц€:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}