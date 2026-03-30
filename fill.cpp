#include <iostream>
using namespace std;
int main(){
    string food[10] = {"Pizza","Pizza","Pizza","Pizza","Pizza","Pizza","Pizza","Pizza","Pizza","Pizza"};
    for (string pizza : food){
        cout << pizza << '\t';
    }
    string name[100] ;
    fill(name, name + 10 , "Burger");
    for (string pizza : name){
        cout << pizza << '\t';
    }
    string foods[6];
    string temp;
    int size = sizeof(foods)/sizeof(foods[0]);
    for (int i = 0; i < size ; i ++){
            cout << "Enter the name of the # " << i << " food  or 'q' for quit: ";
            getline(cin , temp);
            if (temp == "q"){
                break;
            } 
            else {
                foods[i] = temp;
            }
    }
    cout << "Your favourite foods are: ";
    for (int i = 0; !foods[i].empty() ; i++ ){
        cout << foods[i] << '\t';
    }
    return 0;
}