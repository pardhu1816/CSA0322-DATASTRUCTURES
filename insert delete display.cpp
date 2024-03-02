#include <stdio.h>

#define MAX_SIZE 100

void insertElement(int arr[], int *size, int element, int position) {
    if (*size >= MAX_SIZE) {
        printf("Array is full. Insertion failed.\n");
        return;
    }

    if (position < 0 || position > *size) {
        printf("Invalid position. Insertion failed.\n");
        return;
    }

    for (int i = *size - 1; i >= position; i--) {
        arr[i + 1] = arr[i];
    }

    arr[position] = element;
    (*size)++;
}

void deleteElement(int arr[], int *size, int position) {
    if (*size == 0) {
        printf("Array is empty. Deletion failed.\n");
        return;
    }

    if (position < 0 || position >= *size) {
        printf("Invalid position. Deletion failed.\n");
        return;
    }

    for (int i = position; i < *size - 1; i++) {
        arr[i] = arr[i + 1];
    }

    (*size)--;
}

void displayArray(int arr[], int size) {
    if (size == 0) {
        printf("Array is empty.\n");
        return;
    }

    printf("Array elements: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr[MAX_SIZE];
    int size = 0;

    // Insertion
    insertElement(arr, &size, 10, 0);
    insertElement(arr, &size, 20, 1);
    insertElement(arr, &size, 30, 2);
    insertElement(arr, &size, 40, 1);

    // Display
    displayArray(arr, size);

    // Deletion
    deleteElement(arr, &size, 2);

    // Display
    displayArray(arr, size);

    return 0;
}
