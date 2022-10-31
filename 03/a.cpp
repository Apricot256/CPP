#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Card{
    private:
        vector<string> title, auth;
        int amount; 
    public:
        Card();
        ~Card();
        void store(string title, string auth);
        void show();
};

Card::Card(){
    this->amount = 0;
}

Card::~Card(){}

void Card::store(string title, string auth){
    this->title.push_back(title);
    this->auth.push_back(auth);
    this->amount++;
}

void Card::show(){
    for (int i = 0; i < this->amount; i++){
        cout << this->title.at(i) << "\t" << this->auth.at(i) << endl;
    }
}

int main(int argc, char const *argv[]){
    Card* lib1 = new Card();
    lib1->store("appple", "dog");
    lib1->store("banana", "cat");
    lib1->show();
    delete lib1;
    return 0;
}
