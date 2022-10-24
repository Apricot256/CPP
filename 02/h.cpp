#include <iostream>
#include <cmath>

#define WIDTH 35
#define EPS 0.5

using namespace std;

void plot(double y){
    for (int i = 0; i < WIDTH; i++){
        if(abs(i-(sin(y)*(WIDTH/2)+WIDTH/2)) < EPS)cout << "*";
        else if(i == WIDTH/2 + 1)cout << "|";
        else cout << " ";
    }
    cout << endl;
    return;
}

int main(int argc, char const *argv[]){
    for (double  i = -M_PI; i < M_PI; i+=0.25){
        plot(i);
    }
    return 0;
}