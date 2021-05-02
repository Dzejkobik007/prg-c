#include <stdio.h>
#include <stdlib.h>

int p = 5, i, v, m, t, b, c ,s, f;

int a[5];

int generuj(){
    
    srand(7);
    
    for( i = 0 ; i < p ; i++ ) {
        a[i] = rand() % 50;
    }
    return 0;
}

int vypis(){
    printf("Vypis: ");
    for( i = 0 ; i < p ; i++ ) {
        printf("%i, ", a[i]);
    }
    printf("\n\n");
    return 0;
}

int analyzuj(){
    v = 0;
    m = 1000;

    for( i = 0 ; i < p ; i++ ) {
        if(a[i] < m){
            m = a[i];
        }
        if(a[i] > v){
            v = a[i];
        }
    }
    t = 0;
    b = 0;
    for( i = 0 ; i < p ; i++ ) {
        if(a[i] == m || a[i] == v){ 
            if(s == 0){
                if(v == a[i]){
                    s = 1;
                }
            }else{
                if(v == a[i]){
                    t += a[i];
                }
            }
            if(f == 0){
                if(m == a[i]){
                    f = 1;
                }
            }else{
                if(m == a[i]){
                    t += a[i];
                }   
            }
        }else{
            t += a[i];
        }
        b += a[i];
    }
    t = t / p;
    c = b / p;
    return 0;
}

int main() {
    generuj();
    vypis();
    analyzuj();
    
    printf("Min: %i Max: %i\n\n", m , v);
    printf("Soucet vsech: %i\n\n", b);
    printf("Prumer vsech: %i\n\n", c);
    printf("Prumer bez min/max: %i\n\n", t);
    
    return 0;
}
