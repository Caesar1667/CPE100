#include <stdio.h>
int LeapFrog(int year)
{
    if ((year % 4 == 0 || year % 4 == 0) && year % 100 != 0)
        return 1;
    else
        return 0;
}
int ValidDate(int day, int month, int year)
{
    if (day < 1 || day > 31 || month < 1 || month > 12 || year < 1)
        return 0;
    int days_int_month[] = {31, 28 + LeapFrog(year), 31, 30, 31, 30, 31, 31, 30,
                            31, 30, 31};
    return day <= days_int_month[month - 1];
}
int main()
{
    int date, month, year, Input;
    do
    {
        Input = scanf("%d/%d/%d", &date, &month, &year);
        if (Input != 3)
        {
            puts("Input date is invalid. Enter a valid date again.");
            continue;
        }
        if (ValidDate(date, month, year) == 1)
        {
            puts("Input date is valid.");
        }
        else
        {
            puts("Input date is invalid. Enter a valid date again.");
        }
    } while (Input != 3 || ValidDate(date, month, year) != 1);
}