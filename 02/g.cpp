#include <iostream>
#include <stdio.h>

using namespace std;

int x[4096], w[4096];

int MyFunction(int *x, int *w, int n);

int main(int argc, char const *argv[]){
    int n;
    printf("Please input N : ");    scanf("%d", &n);

    for (int i = 0; i < n; i++){
        printf("Please input a x[%d] : ", i);    scanf("%d", &x[i]);
    }
    printf("---------------------------------------\n");
    for (int i = 0; i < n; i++){
        printf("Please input a w[%d] : ", i);    scanf("%d", &w[i]);
    }
    printf("The result is %d\n", MyFunction(x, w, n));
    return 0;
}

int MyFunction(int *x, int *w, int n){
    int product = 1;
    for (int i = 0; i < n; i++)product *= (x[i]*w[i]);
    return product;
}