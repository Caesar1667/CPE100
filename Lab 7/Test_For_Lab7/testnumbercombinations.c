#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Function to compare two strings when concatenated in different orders
int compareStrings(const void *a, const void *b) {
    char ab[20], ba[20];
    sprintf(ab, "%d%d", *(int *)a, *(int *)b);
    sprintf(ba, "%d%d", *(int *)b, *(int *)a);
    return strcmp(ab, ba);
}

int main() {
    int n;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    if (n < 1 || n > 100) {
        printf("Invalid input. The length of the array should be between 1 and 100.\n");
        return 1;
    }

    int arr[n];
    printf("Enter the elements of the array (each element should be between 0 and 9):\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        if (arr[i] < 0 || arr[i] > 9) {
            printf("Invalid input. Each element should be between 0 and 9.\n");
            return 1;
        }
    }

    // Sort the array of integers based on custom comparison function
    qsort(arr, n, sizeof(int), compareStrings);

    // Create a string to store the smallest number
    char smallestNumber[200] = "";
    for (int i = 0; i < n; i++) {
        char digit[2];
        sprintf(digit, "%d", arr[i]);
        strcat(smallestNumber, digit);
    }

    printf("Smallest Number: %s\n", smallestNumber);

    return 0;
}
