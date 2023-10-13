#include <stdio.h>

 void Favourite_numbers(){
    int a;
    scanf("%d", &a);
    if( a%2== 0 && a % 7 ==0){
        printf("Alice\n");
    }
    else if ( a % 9 == 0 && a % 2 != 0 ){
        printf("BOB\n");
    }
    else{
        printf("charlie\n");
    }
 }

 int main(){
    int a;
    scanf("%d", &a);
    for(int i =0 ; i < a ; i++){
        Favourite_numbers();
    }
}