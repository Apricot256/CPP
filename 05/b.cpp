#include <string>
#include "b_class.hpp"

using namespace std;

int main(int argc, char const *argv[]){
    MyClass *man = new MyClass("Sunada", "kakikukeko");
    man->Show();
    delete man;
    return 0;
}

