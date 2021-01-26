#include <stdio.h>

// Debug console Visual studia asi nepodporuje vstup od uzivatele, je nutne zaridit aby se program spoustel v terminalu
// Pri zadani charakteru/stringu se scanf rozbije a nevim jak poznat jestli se pokousi zadat charakter do floatu nebo ne

int zapornost(float cislo);
int main() {
    float c1, c2, v1, v2, v3, v4; // Deklarace promennych
    printf("Prosim nezadavej zadne jine pismena nebo znaky nez cela a desetinna cisla,\njinak se program rozbije ;-( (Cislo1 Cislo2)\n"); 
    while (1) {                 // Zacatek smycky

        c1 = c2 = v1 = v2 = v3 = v4 = 0.0; // Reset promennych na nulu

        printf("Zadej dve cisla: ");    
        scanf("%f %f", &c1 ,&c2);  // Dotaz na cisla


        
        
        printf("\n\n");
        printf("*********************************\n");
        
        printf("Cisla: %4.2f a %4.2f\n", c1 , c2); // Vypis zvolenych cisel
        
        v1=c1+c2;                   // Scitani
        printf("Soucet: %4.2f\n", v1);
        
        v2=c1-c2;                   // Odcitani
        printf("Odcitani: %4.2f\n", v2);
        
        if(c2 != 0){                // Deleni
            v3=c1/c2;               
            printf("Deleni: %4.2f\n", v3);
        }
        else{
            printf("Deleni: Nulou se delit neda!!\n");
        }
        
        v4=c1*c2;                   // Nasobeni
        printf("Nasobeni: %4.2f\n", v4);
        
        if(c1 != 0){                // Zapornost prvniho cisla
            if(zapornost(c1) == 1){
                printf("Prvni cislo je kladne\n");
            }else
            {
                printf("Prvni cislo je zaporne\n");
            }
        }
        
        if(c2 != 0){                // Zapornost druheho cisla
            if(zapornost(c2) == 1){
                printf("Druhe cislo je kladne\n");
            }else
            {
                printf("Druhe cislo je zaporne\n");
            }
        }
        
        printf("*********************************\n");
        printf("\n");
        
        
    }
    return 0;
}
int zapornost(float cislo) {
    // Zjisteni zapornosti
    if(cislo > 0){
        return 1;
    }
    else{
        return 0;
    }
}

// Snad jsem na nic nezapomnel :P