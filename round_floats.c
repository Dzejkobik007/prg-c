#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

#define max 10


float arr[max-1];
float *p = arr;
int generate_items(){
    srand(time(NULL));
    float f;

    for(int i = 0; i < max ;i++){
        f = rand();
        p[i] = f;     
    }
}

int show_items(){
    for(int i = 0; i < max ; i++){
        printf("%f,  ", p[i]);
    }
    printf("\n");
}

int round_items(){
    for(int i = 0; i < max ; i++){
        printf("%.1f,  ", p[i]);
    }
    printf("\n");
}


int main(){
    generate_items();
    show_items();
    round_items();
    return 0;
}
