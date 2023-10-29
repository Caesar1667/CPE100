#include <stdio.h>

int is_leap_year(int year) {
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        return 1;
    }
    return 0;
}

int is_valid_date(int day, int month, int year) {
    if (year < 1 || month < 1 || month > 12 || day < 1) {
        return 0;
    }

    int days_in_month[] = {0, 31, 28 + is_leap_year(year), 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    return day <= days_in_month[month];
}

int main() {
    int day, month, year;
    while (1) {
        printf("Enter a date (dd/mm/yyyy): ");
        if (scanf("%d/%d/%d", &day, &month, &year) != 3 || getchar() != '\n') {
            while (getchar() != '\n'); // Clear input buffer
            printf("Input date is invalid. Enter a valid date again.\n");
            continue;
        }

        if (is_valid_date(day, month, year)) {
            printf("Input date is valid.\n");
            break;
        } else {
            printf("Input date is invalid. Enter a valid date again.\n");
        }
    }

    return 0;
}
