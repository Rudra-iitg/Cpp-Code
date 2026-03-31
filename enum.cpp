#include <iostream>
using namespace std;

enum Months {jan = 0, feb = 1, mar = 2, apr = 3, may = 4, jun = 5};

int main(){
    Months now = mar;

    switch (now){
        case jan : cout << "This is January\n";   break;
        case feb : cout << "This is February\n";  break;
        case mar : cout << "This is March\n";     break;
        case apr : cout << "This is April\n";     break;
        case may : cout << "This is May\n";       break;
        case jun : cout << "This is June\n";      break;
        default  : cout << "Not present\n";       break;
    }

    switch (mar){
        case jan : cout << "This is January\n";   break;
        case feb : cout << "This is February\n";  break;
        case mar : cout << "This is March\n";     break;
        case apr : cout << "This is April\n";     break;
        case may : cout << "This is May\n";       break;
        case jun : cout << "This is June\n";      break;
        default  : cout << "Not present\n";       break;
    }

    return 0;
}
