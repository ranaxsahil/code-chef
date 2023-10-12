#include <stdio.h>


void cac(){
    int x,y,c;
    scanf( "%d%d%d", &x,&y,&c );
    int z = (5*x + 10*y )/c;
    printf("%d\n", z);

}


int main(){
    int a;
    scanf("%d", &a);
    for(int i =0 ; i < a ; i++){
        cac();
    }
}