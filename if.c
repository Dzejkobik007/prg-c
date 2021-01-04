#include <stdio.h>

int main(){
    int cislo = -40;
    
    if(cislo < 0){
        cislo = cislo * -1;
    }
    printf("Cislo: %i",cislo);
    return 0;
}