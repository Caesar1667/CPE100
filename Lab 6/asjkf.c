#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int closestSum = abs(arr[0] + arr[1]);
    int firstElement = arr[0];
    int secondElement = arr[1];

    // Find two elements whose sum is closest to zero
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n; j++) {
            int currentSum = arr[i] + arr[j];
            int absSum = abs(currentSum);

            if (absSum < closestSum) {
                closestSum = absSum;
                firstElement = arr[i];
                secondElement = arr[j];
            }
        }
    }

    printf("%d\n%d\n", firstElement, secondElement);

    return 0;
}
