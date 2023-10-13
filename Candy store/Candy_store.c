#include <stdio.h>

void candy_store(){
    int target, sale;
    scanf("%d%d", &target , &sale);
    if(target >= sale){
        printf("%d\n", sale);
    }
    else{
        printf("%d\n", (2*sale - target));
    }
}


int main(){
    int a;
    scanf("%d", &a);
    for(int i =0 ; i < a ; i++){
        candy_store();
    }
}