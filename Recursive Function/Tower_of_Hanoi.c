#include <stdio.h>

int Tower_of_HELL(int n, char source, char destination, char auxiliary){
    if(n == 1){
        printf("Move disk 1 from source %c to destination %c.\n", source, destination);
        return 0;
    }
    Tower_of_HELL(n - 1, source, auxiliary,destination );
    printf("Move disk %d from source %c to destination %c.\n", n, source, destination);
    Tower_of_HELL(n - 1, auxiliary,destination ,source );
}

int main(){
    int n; scanf("%d", &n);
    Tower_of_HELL(n, 'A','C', 'B' );
    return 0;
}