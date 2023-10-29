#include <stdio.h>

// Function to check if a number is prime
int isPrime(int n) {
    if (n <= 1) {
        return 0; // Not prime
    }
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return 0; // Not prime
        }
    }
    return 1; // Prime
}

// Function to check if a number is a palindrome
int isPalindrome(int n) {
    int reversed = 0;
    int tempN = n;

    while (tempN != 0) {
        int remainder = tempN % 10;
        reversed = reversed * 10 + remainder;
        tempN /= 10;
    }

    return (n == reversed);
}

int main() {
    int n;

    // Input validation
    do {
        printf("Enter an integer between 0 and 10000: ");
        scanf("%d", &n);
        if (n < 0 || n > 10000) {
            printf("The size you've entered is out of the allowed range.\n");
        }
    } while (n < 0 || n > 10000);

    // Find the closest prime number that is also a palindrome
    while (1) {
        n++;
        if (isPrime(n) && isPalindrome(n)) {
            printf("The closest prime and palindrome number is: %d\n", n);
            break;
        }
    }

    return 0;
}
