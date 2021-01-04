#include <stdio.h>

int main(){
    int cislo = -40;
    
    if(cislo < 0){
        cislo = cislo * -1;
    }  
    while(cislo){
        printf("Cislo: %i",cislo);
        cislo--;
    }
    return 0;
}