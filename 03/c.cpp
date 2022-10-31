#include <iostream>
#include <cmath>

using namespace std;

char min(char a, char b){
    return (a < b)? a: b;
}

int min(int a, int b){
    return (a < b)? a: b;
}

double min(double a, double b){
    return (a < b)? a: b;
}

int main(int argc, char const *argv[]){
    cout << min('a', 'b') << endl;
    cout << min(1, 3) << endl;
    cout << min(4.2, 3.3) << endl;
    return 0;
}
