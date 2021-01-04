#include <stdio.h>

int main(){
    float a = 0.00000;
    while(1){
        
        printf("%f\n",a);
        a += 0.00001;
    }
    return 0;
}