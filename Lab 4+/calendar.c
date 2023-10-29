#include <stdio.h>

int days_in_each_month(int month, int year){
    int days_in_month[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    if(month == 2 && (year %4 == 0 && year % 100 != 0) || year % 400 == 0){
        return 29;
    }else{
        return days_in_month[month]; 
    }
}

void the_whole_calendar(int year, int month){
    int days = days_in_each_month(year, month);
    int first_day_of_week = (year - (14 - month) / 12) % 7;
    printf("   S   M   T   W   T   F   S\n");
    for(int i = 0; i < first_day_of_week; i++){
        printf("   ");
    }
    for(int day = 1; day <= days; day++){
        printf("%4d", day);

        if((day + first_day_of_week) % 7 == 0){
            printf("\n");
        }
    }
    printf("\n");
}

int main(){
    int month, year;
    printf("Input the month : ");
    scanf("%d", &month);
    printf("Input the year : ");
    scanf("%d", &year);
    the_whole_calendar(year, month);
    return 0;
}
