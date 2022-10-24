#include <iostream>
#include <stdio.h>

using namespace std;

double x[4096], w[4096];

double MyFunction(double *x, double *w, int n);

int main(int argc, char const *argv[]){
    int n;
    printf("Please input N : ");    scanf("%d", &n);

    for (int i = 0; i < n; i++){
        printf("Please input a x[%d] : ", i);    scanf("%lf", &x[i]);
    }
    printf("---------------------------------------\n");
    for (int i = 0; i < n; i++){
        printf("Please input a w[%d] : ", i);    scanf("%lf", &w[i]);
    }
    printf("The result is %f\n", MyFunction(x, w, n));
    return 0;
}

double MyFunction(double *x, double *w, int n){
    int sum = 0;
    for (int i = 0; i < n; i++)sum += (x[i]*w[i]);
    return sum;
}