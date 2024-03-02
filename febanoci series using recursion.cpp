#include <stdio.h>

void fibonacci(int n) {
    int prev = 0, current = 1, next;

    printf("Fibonacci Series up to %d terms:\n", n);

    for (int i = 0; i < n; ++i) {
        printf("%d, ", prev);
        next = prev + current;
        prev = current;
        current = next;
    }
    printf("\n");
}

int main() {
    int terms;
    printf("Enter the number of terms: ");
    scanf("%d", &terms);

    fibonacci(terms);

    return 0;
}
