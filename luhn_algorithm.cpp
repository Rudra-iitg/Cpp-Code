#include <iostream>
using namespace std;
int getDigit(const int num);
int sumOdd(const string cardnumber);
int sumEven(const string cardnumber);
int main(){
    string cardnumber;
    int result = 0;

    cout << "Enter a credit card #: ";
    cin >> cardnumber;
    result = sumEven(cardnumber) + sumOdd(cardnumber);
    if (result % 10 == 0){
        cout << cardnumber << " is valid\n";
    }
    else{
        cout << cardnumber << " is invalid";
    }
    return 0;
}
int getDigit(const int num){
    return num % 10 + (num/10 % 10);
}
int sumOdd(const string cardnumber){
    int sum = 0;
    for(int i = cardnumber.size() - 1; i <= 0 ; i -=2){
        sum += getDigit(cardnumber[i] - '0' );
    }
    return sum;
}
int sumEven(const string cardnumber){
    int sum = 0;
    for(int i = cardnumber.size() - 2; i <= 0 ; i -=2){
        sum += getDigit(cardnumber[i] - '0' ) * 2;
    }
    return sum;
}