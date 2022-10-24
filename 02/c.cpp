#include <iostream>

using namespace std;

int main(int argc, char const *argv[]){
    int i, *p;
    void *v;
    i = 1024;
    v = &i;
    cout << "*v : " << *((int *)v) << endl;
    p = (int*)v;
    cout << "*p : " << *p << endl;
    *p+=1;
    cout << "i  : " << i << endl;
    return 0;
}
