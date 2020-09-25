//
// Created by Klismann Barros on 25/09/20.
//

#include <stdio.h>

int main(void){
    int array[6] = {31, 41, 59, 26, 41, 58};
    int i;
    int aux;
    int changed = 0, disordened = 1;

    for(i = 0; i < sizeof(array)/4; i++){
        printf("%d ", array[i]);
    }

    puts("");

    while(disordened && !changed){
        for(i = 0; i < (sizeof(array)/4) - 1; i++) {
            if(array[i+1] < array[i]){
                aux = array[i];
                array[i] = array[i+1];
                array[i+1] = aux;
                changed = 1;
            }
        }
        if(!changed){
            disordened = 0;
        }
        changed = 0;
    }

    for(i = 0; i < sizeof(array)/4; i++){
        printf("%d ", array[i]);
    }

    return 0;
}