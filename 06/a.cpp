#include <iostream>

using namespace std;

void Neg(int &x){
    x *= -1;
}

void Neg(int *x){
    *x *= -1;
}

int main(int argc, char const *argv[]){
    int i, j;
    cout << "ポインタを使用して実装した関数の機能を確認します : " << endl;
    for (int ix = 0; ix < 20; ix++)cout << "-";
    Neg(&i);
    Neg(&j);
    cout << "iは?"; cin >> i;
    cout << "jは?"; cin >> j;
    cout << "変換後の値 : " << i << " " << j << endl;
    cout << "参照を使用して実装した関数の機能を確認します : " << endl;
    for (int ix = 0; ix < 20; ix++)cout << "-";
    Neg(i);
    Neg(j);
    cout << "iは?"; cin >> i;
    cout << "jは?"; cin >> j;
    cout << "変換後の値 : " << i << " " << j << endl;
    return 0;
}
