#include <stdio.h>

int main() {
    double score[8] = {80, 70, 89, 50, 60, 40, 55, 76};
    double grade[8];

    // Initialize an array to count the number of students for each grade
    int gradeCount[5] = {0}; // Initialize all counts to zero

    for (int i = 0; i < 8; i++) {
        double total = 0;
        
        if (score[i] >= 80) {
            total += 1;
        }
        if (score[i] >= 70) {
            total += 1;
        }
        if (score[i] >= 60) {
            total += 1;
        }
        if (score[i] >= 50) {
            total += 1;
        }
        if (score[i] >= 0) {
            total += 1;
        }
        
        grade[i] = total / 5 * 100;

        // Update the count for the corresponding grade
        if (score[i] >= 80) {
            gradeCount[0]++;
        }
        if (score[i] >= 70) {
            gradeCount[1]++;
        }
        if (score[i] >= 60) {
            gradeCount[2]++;
        }
        if (score[i] >= 50) {
            gradeCount[3]++;
        }
        if (score[i] >= 0) {
            gradeCount[4]++;
        }
    }
    
    for (int i = 0; i < 8; i++) {
        printf("Grade for student %d: %.2lf%%\n", i + 1, grade[i]);
    }

    // Print the counts for each grade
    printf("Number of students with grades:\n");
    printf("A (80-100): %d\n", gradeCount[0]);
    printf("B (70-79): %d\n", gradeCount[1]);
    printf("C (60-69): %d\n", gradeCount[2]);
    printf("D (50-59): %d\n", gradeCount[3]);
    printf("F (0-49): %d\n", gradeCount[4]);

    return 0;
}
