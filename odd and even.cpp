#include <stdio.h>

void findOddEven(int numbers[], int size) {
    printf("Odd numbers: ");
    for (int i = 0; i < size; i++) {
        if (numbers[i] % 2 != 0) {
            printf("%d ", numbers[i]);
        }
    }
    printf("\n");

    printf("Even numbers: ");
    for (int i = 0; i < size; i++) {
        if (numbers[i] % 2 == 0) {
            printf("%d ", numbers[i]);
        }
    }
    printf("\n");
}

int main() {
    int numbers[] = {2, 5, 8, 11, 14, 17, 20};
    int size = sizeof(numbers) / sizeof(numbers[0]);

    findOddEven(numbers, size);

    return 0;
}
