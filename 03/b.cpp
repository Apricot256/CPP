#include <iostream>
#include <cmath>

using namespace std;

double sroot(int x){
    return sqrt(x);
}

double sroot(long x){
    return sqrt(x);
}

double sroot(double x){
    return sqrt(x);
}

int main(int argc, char const *argv[]){
    cout << sroot(2) << endl;
    cout << sroot(2l) << endl;
    cout << sroot(2.0) << endl;
    return 0;
}
