#include <stdio.h>

struct time
{
    int hour;
    int minute;
    int second;
};

int main()
{
    struct time sleep, wake, count;
    scanf("%d:%d:%d", &sleep.hour, &sleep.minute, &sleep.second);
    scanf("%d:%d:%d", &wake.hour, &wake.minute, &wake.second);
    count.hour = wake.hour - sleep.hour;
    count.minute = wake.minute - sleep.minute;
    count.second = wake.second - sleep.second;
    if(count.hour < 0){
        count.hour += 24;
    }
    if(count.hour == 7){
        if(count.minute > 0){
            printf("True");
        }else if(count.minute == 0){
            if(count.second >= 0){
                printf("True");
            }else{
                printf("False");
            }
        }else{
            printf("False");
        }
    }else if(count.hour == 10){
        if(count.minute < 0){
            printf("True");
        }else if(count.minute == 0){
            if(count.second <= 0){
                printf("True");
            }else{
                printf("False");
            }
        }else{
            printf("False");
        }
    }else if(count.hour > 7 && count.hour < 10){
        printf("True");
    }else{
        printf("False");
    }
    return 0;
}
