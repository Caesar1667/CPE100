//Pansa Intawong 66070503474
#include <stdio.h>

int CelCon(int CelTemp){
    int Converted = (CelTemp * 9/5) + 32;
    return Converted;
}

int FarCon(int FarTemp){
    int Converted = (FarTemp - 32) * 5/9;
}

int main(){
    int Cel, Far;
    scanf("%d%d", &Cel, &Far);
    printf("%d\n%d", CelCon(Cel), FarCon(Far));
    return 0; 
}