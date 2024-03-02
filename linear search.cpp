#include <stdio.h>

int linearSearch(int arr[], int size, int key) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == key) {
            return i; // Element found, return its index
        }
    }
    return -1; // Element not found
}

int main() {
    int arr[10] = {3, 4, 1, 7, 5, 8, 11, 42, 3, 13};
    int size = sizeof(arr) / sizeof(arr[0]);
    int key = 4;
    int index = linearSearch(arr, size, key);

    if (index == -1) {
        printf("The element is not present in the array.\n");
    } else {
        printf("The element is present at arr[%d].\n", index);
    }

    return 0;
}
