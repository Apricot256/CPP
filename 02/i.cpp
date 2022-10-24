#include <iostream>

using namespace std;

float SetpFunction(float x);

int main(int argc, char const *argv[]){
    float x[21];
    float *itr = x;
    for (int i = -10; i <= 10; i++){
        *(itr) = i/10.0;
        itr++;
    }
    for (int i = 0; i <= 20; i++){
        printf("x[%d] = %f -> (Step Function) -> %f\n", i, x[i], SetpFunction(x[i]));
    }
    return 0;
}

float SetpFunction(float x){
    return (x < 0)? 0.0 : 1.0;
}