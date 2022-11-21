#include <string>
#include "d_class.hpp"

using namespace std;

int main(int argc, char const *argv[]){
    Squares *array[10];
    for (int i = 0; i <= 10; i++)    {
        array[i] = new Squares(i+1, (i+1)*(i+1));
    }
    for(auto x: array){
        x->Show();
    }
    return 0;
}
