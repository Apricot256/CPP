#include <iostream>
#include <vector>
#include "b_class.hpp"

using namespace std;

int main(int argc, char const *argv[]){
    A_type *array[2][5];
    for (int i = 0; i < 2; i++){
        for (int j = 0; j < 5; j++){
            array[i][j] = new A_type(i*5+j+1, i*5+j+1);
        }
    }

    for (int i = 0; i < 2; i++){
        for (int j = 0; j < 5; j++){
            array[i][j]->Show();
        }  
    }
    
    return 0;
}
