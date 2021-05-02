#include <stdio.h>

float procenta(float val1, float val2){
    val2 = val2 / 100;
    return val2 * val1;
}

int main(){
    // kolik z ceho
    printf("%.1f%%" , procenta(69, 69));
    return 0;
}
