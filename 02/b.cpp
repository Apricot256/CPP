#include <iostream>

using namespace std;

int main(int argc, char const *argv[]){
    int i, *p;
    i = 1024;
    p = &i;
    cout << "i  : " << i << endl;
    cout << "&i : " << &i << endl;
    cout << "p  : " << p << endl;
    cout << "*p : " << *p << endl;
    *p += 1;
    cout << "i  : " << i << endl;
    cout << "&i : " << &i << endl;
    cout << "p  : " << p << endl;
    cout << "*p : " << *p << endl;
    return 0;
}

