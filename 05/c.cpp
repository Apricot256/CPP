#include <string>
#include "c_class.hpp"

using namespace std;

int main(int argc, char const *argv[]){
    Letters *array[10];
    for (int i = 0; i <= 10; i++)    {
        array[i] = new Letters((char)(i+'A'));
    }
    for(auto x: array){
        cout << x->Get_ch() << endl;
    }
    return 0;
}

