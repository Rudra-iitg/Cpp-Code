#include <iostream>
//#include <ctime>
using namespace std;
int main(){
    // int len;
    // int wid;
    // cout << "Enter the lenght: ";
    // cin >> len;
    // cout << "Enter the breadth: ";
    // cin >> wid;
    // for (int i = 1; i <= wid ; i++ ){
    //     for (int j =1; j <= len; j++){
    //         cout << "$" ;
    //     }
    //     cout << '\n';
    // }
    // cout << "=============Ramdom Numnber generator================\n";
    // srand(time(NULL));
    // int num1 = (rand() % 6)+ 1;
    // int num2 = (rand() % 6)+ 1;
    // int num3 = (rand() % 6)+ 1;
    // cout << num1 << '\n';
    // cout << num2 << '\n';
    // cout << num3 << '\n';
    cout << "============RANDOM NUMBER GUESSING ====================\n";
    srand(time(NULL));
    int rand_num = rand() % 100 + 1;
    int guess;
    int tries = 0;
    do{
        cout << "Enter you guess : " ;
        cin >> guess;
        tries ++;
        if(guess > rand_num){
            cout << "Go Lower!\n";
        }
        else if (guess < rand_num){
            cout << "Go up !\n";
        }
        else{
            cout << "Correct Number \n";
        }
        
    }while(guess != rand_num);
    cout << "You total tries are : " << tries << '\n';
    return 0;
}