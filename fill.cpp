#include <iostream>
using namespace std;
int main(){
    string food[10] = {"Pizza","Pizza","Pizza","Pizza","Pizza","Pizza","Pizza","Pizza","Pizza","Pizza"};
    for (string pizza : food){
        cout << pizza << '\t';
    }
    string name[100] ;
    fill(name, name + 100 , "Burger");
    for (string pizza : name){
        cout << pizza << '\t';
    }
    return 0;
}