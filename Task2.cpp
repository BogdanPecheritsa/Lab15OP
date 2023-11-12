#include <stdio.h>
#include <windows.h>

void moveNegativeElementsLeft(int matrix[100][100], int rows, int cols) {
    for (int i = 0; i < rows; i += 2) {
        int j, k = 0;

        for (j = 0; j < cols; j++) {
            if (matrix[i][j] < 0) {
                int temp = matrix[i][j];
                matrix[i][j] = matrix[i][k];
                matrix[i][k] = temp;
                k++;
            }
        }
    }
}

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int rows, cols;

    printf("¬вед≥ть к≥льк≥сть р€дк≥в: ");
    scanf_s("%d", &rows);

    printf("¬вед≥ть к≥льк≥сть стовпц≥в: ");
    scanf_s("%d", &cols);

    int matrix[100][100];

    printf("¬вед≥ть елементи матриц≥:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf_s("%d", &matrix[i][j]);
        }
    }

    moveNegativeElementsLeft(matrix, rows, cols);

    printf("ћатриц€ з в≥д'Їмними елементами нал≥во:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}