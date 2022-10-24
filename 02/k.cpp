#include <iostream>
#include <stdlib.h>

using namespace std;

void Reverse(int *a, int *reversed, int n);

int main(int argc, char const *argv[]){
    int a[6], b[6];
    for (int i = 0; i < 6; i++)a[i] = rand()%1000;
    for(int x: a)cout << x << " ";
    cout << endl;
    Reverse(a, b, 6);
    for(int x: b)cout << x << " ";
    cout << endl;
    return 0;
}

void Reverse(int *a, int *reversed, int n){
    for (int i = 0; i < n; i++)reversed[n-i-1] = a[i];
}