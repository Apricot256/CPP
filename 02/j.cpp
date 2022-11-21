#include <iostream>
#include <stdio.h>
#include <time.h>

using namespace std;

/* Function 
float *x: array x
float *w: array w
int  n: size of arrays
return -> sigma(xi+wi)
*/
float MyFunction(float *x, float *w, int n);

/* Function -> initarray
float *x: array x
float *w: array w
int  n: size of arrays
*/
void InitArray(float *x, float *w, int n);

/* Function 
float x: x
return 0 when x < 0, 1 when x >= 0
*/
float SetpFunction(float x);

int main(int argc, char const *argv[]){
    float x[10], w[10];
    InitArray(x, w, 10);
    printf("The result of the equation is: %f\n", MyFunction(x, w, 10));
    printf("The result after the step function is : %f\n", SetpFunction(MyFunction(x, w, 10)));
    return 0;
}

float MyFunction(float *x, float *w, int n){
    float sum = 0;
    for (int i = 0; i < n; i++)sum += (x[i]*w[i]);
    return sum;
}

void InitArray(float *x, float *w, int n){
    srand((unsigned)time(NULL));
    for (int i = 0; i < 10; i++){
        x[i] = 2.0 * (rand() / (RAND_MAX + 1.0))-1.0;
        w[i] = 2.0 * (rand() / (RAND_MAX + 1.0))-1.0;
        printf("x[%d] = %f, w[%d] = %f\n", i, x[i], i, w[i]);
    }
}

float SetpFunction(float x){
    return (x < 0)? 0.0 : 1.0;
}

