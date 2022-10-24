#include <iostream>

using namespace std;

int main(int argc, char const *argv[]){
    char *p = "suwarika";
    int n;
    cout << "Please input an integer number : ";
    cin >> n;
    cout << *(p+n-1) << endl;
    return 0;
}
