#include <stdio.h>

void caesar_encrypt(char slovo[]){
    
    for (int i = 0; i < 4; i++){
        slovo[i] += 3;
        printf("%c", slovo[i]);
        if (slovo[i] == '\0'){
            break;
        }
        
    }

}

int main(){
    char arr[] = {'A', 'H', 'O', 'J', '\0'};
    caesar_encrypt(arr);
    return 0;
}