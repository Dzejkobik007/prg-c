#include <stdio.h>

int trojuhelnik(int count){
    int i,b,space, star = 1;
    space = count - 1;
    while(count){
        b = space;
        while(b){
            printf(" ");
            b--;
        }
     
        for(i = 0; star > i; i++){
            printf("*");
        }
        printf("\n");
        space--;
        count--;
        star = star + 2;
    }
    
    return 0;
}
int main(){
    trojuhelnik(20);
    return 0;
}