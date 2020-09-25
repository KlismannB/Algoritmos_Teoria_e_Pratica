#include <iostream>

using namespace std;

int main() {
    int array[6] = {31, 41, 59, 26, 41, 58};
    int i;
    bool disordened = true, changed = false;
    int aux;

    for(i = 0; i < (sizeof(array)/4); i++){
        cout << array[i] << " ";
    }

    cout << endl;

    while(disordened && !changed) {
        for (i = 0; i < (sizeof(array) / 4) - 1; i++) {
            if(array[i] > array[i+1]){
                aux = array[i];
                array[i] = array[i+1];
                array[i+1] = aux;
                changed = true;
            }
        }
        if(!changed){
            disordened = false;
        }
        changed = false;
    }

    for(i = 0; i < (sizeof(array)/4); i++){
        cout << array[i] << " ";
    }

    return 0;
}
