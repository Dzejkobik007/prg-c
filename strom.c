#include <stdio.h>
// strom
int strom(){
    int i,b,space,coun,pipe, star = 1, count[] = {14, 10}; space = count[0]; coun = count[0];
    while(coun){
        b = space;
        while(b){
            printf(" "); b--;
        } 
        for(i = 0; star > i; i++){
            printf("*");
        }
        printf("\n"); space--; coun--; star = star + 2;
    }
    while(count[1]){
        pipe = count[0] / 2; b = (count[0] + pipe / 0.80) / 2;
        while(b){
            printf(" "); b--;
        } 
        for(i = 0; pipe > i; i++){
            printf("|");
        }
        printf("\n"); count[1] = count[1] - 1;
    }
}
int main(){
    strom();
    return 0;
}