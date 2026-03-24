#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
typedef string text_t;
typedef int number_t;
// OR
using name_t = string;
int main(){
    // text_t fristname = "Rudra";
    // number_t age = 32;
    // name_t surname = "Jha";
    // cout << fristname << endl;
    // cout << age << endl;
    // cout <<  surname << '\n';
    // int student = 45;
    // int x = 2.32;
    // char u = 120;
    // cout << u << endl;
    // cout << (char) 233 << endl;
    // string name;
    // cout << "What is your name : " ;
    // cin >> name;
    // cout << "Your name is " << name << endl;
    // string full_name;
    // cout << "What is your full name : " ;
    // getline(cin >> ws, full_name);
    // cout << "Your full name is " << full_name << '\n'; 
    // cout << min(student, x) << '\n';
    // cout << round(2.64);
    // TO FIND THE HYPOTENUSE OF A TRIANGLE
    // double a;
    // double b;
    // double c;
    // cout << "enter side a : " ;
    // cin >> a ;
    // cout << "enter side b : ";
    // cin >> b;
    // a = pow(a,2);
    // b = pow(b,2);
    // c = sqrt(a+b);
    // cout << "The Hyptonuse is : " << c << endl;
    // int age = 23;
    // if ( age > 200){
    //     cout << "You are dead";
    // }
    // else if( age > 18 ){
    //     cout << "you are an adult" << '\n';
    // }
    // else {
    //     cout << "you are a child" << '\n';
    // }
    // // Ternanry Operator=================
    // age >= 18 ? cout << "You are adult" : cout << "You are a Kid" << '\n';
    // cout << "Odd/even test" << endl;
    // int n = 34;
    // n % 2 == 0 ? cout << "the number is even" : cout << "the number is odd";
    // cout << '\n';
    // ===========Other method of Ternary operator=============
    // char truth = true;
    // cout << (truth ? "You are honest" : "You are Lier"); 
    // int month;
    // cout << "Enter the month number : " ;
    // cin >> month ;
    // switch(month){
    //     case 1:
    //         cout << "January";
    //         break;
    //     case 2:
    //         cout << "Feb";
    //         break;
    //     case 3:
    //         cout << "March";
    //         break;
    //     case 4:
    //         cout << "April";
    //         break;
    //     case 5:
    //         cout << "May";
    //         break;
    //     case 6:
    //         cout << "June";
    //         break;
    //     case 7:
    //         cout << "July";
    //         break;
    //     default:
    //         cout << "Other Month";
    //         break;
    // }
    // string name;
    // cout << "Enter your name: " ;
    // getline (cin , name);
    // if (name.length() > 10){
    //     cout << "Your name cannot be more than 10 character long\n";
    //     }
    // else {
    //     cout << "You are welcome \n";
    // }
    // name.length()> 10? cout << "you are not welcome" : cout << "You are welcome";
    // cout << name.length() << endl;
    // while(name.empty()){
    //     cout << "enter your name : " ;
    //     getline( cin, name);
    // }
    // cout << "hello" ;
    // // while (1 == 1){
    // //     cout << "I am stuck in while loop\ner";
    // // }
    // int na;
    // cout << "do while loop \n";
    // do{
    //     cout << "enter a number" ;
    //     cin >> na;
    // }while(na <=100);
    // cout << "This is the number: " << na ;
    for (int i = 0; i < 10 ; i+=3){
        cout << "Happy New Year" << i << endl;
    }
    return 0;
}
