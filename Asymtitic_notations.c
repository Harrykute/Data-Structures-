#include <stdio.h>

// Function to compute n^2 + n + 1
int computeFunction(int n) {
    return n * n + n + 1;
}

int main() {
    int n;
    printf("Enter a value for n: ");
    scanf("%d", &n);

    // Check if n^2 + n + 1 is O(n^3)
    int upperBound = n * n * n;
    if (computeFunction(n) <= upperBound) {
        printf("n^2 + n + 1 is O(n^3)\n");
    } else {
        printf("n^2 + n + 1 is not O(n^3)\n");
    }

    // Check if n^2 + n + 1 is Ω(n^2)
    int lowerBound = n * n;
    if (computeFunction(n) >= lowerBound) {
        printf("n^2 + n + 1 is Ω(n^2)\n");
    } else {
        printf("n^2 + n + 1 is not Ω(n^2)\n");
    }

    // Check if n^2 + n + 1 is θ(n^2)
    if (computeFunction(n) <= upperBound && computeFunction(n) >= lowerBound) {
        printf("n^2 + n + 1 is θ(n^2)\n");
    } else {
        printf("n^2 + n + 1 is not θ(n^2)\n");
    }

    return 0;
}