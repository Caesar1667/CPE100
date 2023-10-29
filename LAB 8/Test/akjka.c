#include <stdio.h>

int findLastRemaining(int n) {
    if (n == 1) {
        return 1;
    } else if (n % 2 == 0) {
        // If n is even, the result is the same as for n/2
        return 2 * findLastRemaining(n / 2);
    } else {
        // If n is odd, the result is 2 times the result for (n-1)/2
        return 2 * findLastRemaining((n - 1) / 2);
    }
}

int main() {
    int n = 5; // Replace with your desired 'n'.
    int result = findLastRemaining(n);

    printf("The last remaining number is: %d\n", result);

    return 0;
}