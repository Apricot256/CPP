#include <iostream>
#include <algorithm>

using namespace std;

int main(int argc, char const *argv[]){
    int n[3];
    cout << "Input a first integer number : ";  cin >> n[0];
    cout << "Input a second integer number : ";  cin >> n[1];
    cout << "Input a third integer number : ";  cin >> n[2];
    sort(n, n+3);
    cout << "The minimum number is " << n[0] << endl;
    return 0;
}
