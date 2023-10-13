#include <stdio.h>

void Scalene_triangle(){
    int a,b,c;
    scanf("%d%d%d", &a,&b,&c);
    if (a != b && b != c && c != a){
        printf("YES\n");
    }
    else {
        printf("NO\n");
    }
}

int main(){
    int a;
    scanf("%d", &a);
    for(int i =0 ; i < a ; i++){
        Scalene_triangle();
    }
}