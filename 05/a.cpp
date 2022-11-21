#include <iostream>

using namespace std;

int main(int argc, char const *argv[]){
    float *a = new float;
    long *b = new long;
    char *c = new char;
    *a = 3.14;
    *b = 256l;
    *c = 'a';
    cout << *a << " " << *b << " " << *c;
    return 0;
}


