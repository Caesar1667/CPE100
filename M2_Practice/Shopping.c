#include <stdio.h>

struct Product
{
    char name[50];
    int price;
    int amount;
    int total;
    int dupe;
};

int main(){
    int n;
    scanf("%d", &n);
    struct Product item[n];
    while(getchar() != '\n');
    for(int i = 0; i < n; i++){
        scanf("%c %d %d", item[i].name, &item[i].price, &item[i].amount);
        while( getchar() != '\n');
       item[i].total = item[i].price * item[i].amount;
       item[i].dupe = 1;
    }
    int temp;
    char hold;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n - 1; j++){
            if(item[j].total > item[j+1].total){
                temp = item[j].total;
                item[j].total = item[j+1].total;
                item[j+1].total = temp;
                char hold[100];
                strcpy(hold,item[j].name);
                strcpy(item[j].name,item[j+1].name);
                strcpy(item[j+1].name,hold);
            }
        }
    }
    int same = 0;
    for(int i = 0; i < n; i++){
        if(item[i].total == item[i+1].total){
            item[i].dupe = 1;
            item[i+1].dupe = 1;
            same++;
        }
    }
    if(same == 0){
        printf("None");
    }
    for(int i = 0; i < n; i++){
        if(item[i].dupe == 1 && i == n - 1){
            printf("%s ", item[i].name);
        }else if(item[i].dupue **)
    }

}
