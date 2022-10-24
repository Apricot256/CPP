#include <iostream>
#include <stdio.h>
#include <time.h>

using namespace std;

float x[10], w[10];

float MyFunction(float *x, float *w, int n);

int main(int argc, char const *argv[]){
    for (int i = 0; i < 10; i++){
        x[i] = 2.0 * (rand() / (RAND_MAX + 1.0))-1.0;
        w[i] = 2.0 * (rand() / (RAND_MAX + 1.0))-1.0;
        printf("x[%d] = %f, w[%d] = %f\n", i, x[i], i, w[i]);
    }
    printf("The result of the equation is: %f\n", MyFunction(x, w, 10));
    return 0;
}

float MyFunction(float *x, float *w, int n){
    float sum = 0;
    for (int i = 0; i < n; i++)sum += (x[i]*w[i]);
    return sum;
}