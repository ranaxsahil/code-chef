#include <stdio.h>

void  sevenrings(){
    int items, price;
    scanf("%d%d", &items , & price );
    if ( items*price >= 10000 &&  items*price <= 99999){
        printf("Yes\n");
    }
    else {
        printf("No\n");
    }
}


int main(){
    int a;
    scanf("%d", &a);
    for(int i =0 ; i < a ; i++){
        sevenrings();
    }
}