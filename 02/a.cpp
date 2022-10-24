#include <iostream>

using namespace std;

int main(int argc, char const *argv[]){
    int a[5];
    for (int i = 0; i < 5; i++){
        cout << "Input a number for a[" << i << "]: ";
        cin >> a[i];
    }
    int *b = a;
    for(int i = 0; i < 5; i++){
        *(b+i) = 0;
        cout << "Update number for a[" << i << "] is " << a[i] << endl;
    }
    return 0;
}
