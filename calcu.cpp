#include <iostream>
using namespace std;
int main(){
    cout << "=====================This is a calculator============================"<< endl;
    double num1;
    double num2;
    char operation;
    cout << "First Number: ";
    cin >> num1;
    cout << "Second Number: ";
    cin >> num2;
    cout << "Select any of the following operation (+) (-) (X) (/)";
    cin >> operation;
    switch(operation){
        case '+' :
            cout << num1 + num2 << endl;
            break;
        case '-' :
            cout << num1 - num2 << endl;
            break;
        case '*' :
            cout << num1 * num2 << endl;
            break;
        case '/' :
            cout << num1 / num2 << endl;
            break;
        default:
            cout << "Your inputs are invalid";
            break;
    }


    cout << "=====================Calculator programmme ends======================"<< endl;
    return 0;
}