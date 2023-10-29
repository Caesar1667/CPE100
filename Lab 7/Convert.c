#include <stdio.h>

int Convert(int n){
    int num, bin = 0, rem = 0, place = 1;
    while(n){
        rem = n % 2;
        n /= 2;
        bin = bin + (rem * place);
        place = place * 10;
    }
    printf("%d\n", bin);
}
int main()
{
    int n;
    scanf("%d", &n);
    Convert(n);
    return 0;
}