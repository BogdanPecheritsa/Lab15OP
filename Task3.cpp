#include <stdio.h>
#include <windows.h>

void swap(float* xp, float* yp) {
    float temp = *xp;
    *xp = *yp;
    *yp = temp;
}

void bubbleSort(float arr[], int n) {
    int i, j;
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (arr[j] < arr[j + 1])
                swap(&arr[j], &arr[j + 1]);
        }
    }
}

void insertionSort(float arr[], int n) {
    int i, j;
    float key;
    for (i = 1; i < n; i++) {
        key = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] < key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
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

    float matrix[100][100];

    printf("¬вед≥ть елементи матриц≥:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf_s("%f", &matrix[i][j]);
        }
    }

    float arr[10000];
    int k = 0;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            arr[k++] = matrix[i][j];
        }
    }

    bubbleSort(arr, k);

    printf("ћатриц€ п≥сл€ сортуванн€ обм≥ном:\n");
    for (int i = 0; i < k; i++) {
        printf("%.2f ", arr[i]);
        if ((i + 1) % cols == 0)
            printf("\n");
    }

    insertionSort(arr, k);

    printf("\nћатриц€ п≥сл€ сортуванн€ вставками:\n");
    for (int i = 0; i < k; i++) {
        printf("%.2f ", arr[i]);
        if ((i + 1) % cols == 0)
            printf("\n");
    }

    return 0;
}