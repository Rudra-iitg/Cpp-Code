#include <iostream>
using namespace std;
double balance = 0;
void show_balance();
void deposite();
void withdraw();
void welcome();
int main(){
    
    cout << "*****************************************\n";
    cout << "************  WELCOME TO BANK  **********\n";
    welcome();
    int service;
    cout << '\n';
    cout << "Enter the service : ";
    
    do {
        cin >> service;
        cout << endl;
        if (cin.fail()) {           // 👈 check if input was invalid
        cin.clear();            // 👈 reset the error flag
        cin.ignore(1000, '\n'); // 👈 discard the bad input
        cout << "Invalid input! Please enter a number.\n";
        welcome();
        continue;               // 👈 skip the switch and restart loop
    }
        switch (service){
            case 1: show_balance();
                    welcome();
                break;
            case 2: deposite();
                welcome();
                break;
            case 3: withdraw();
                welcome();
                break;
            case 4: cout << "Goodbye!\n"; 
                break;
            default: cout << "Invalid option\n";
                welcome();
            }

    }while (service != 4);
    return 0;
}
void welcome(){
    cout << "Please select the serive\n";
    cout << "1 : Show Balance \n";
    cout << "2 : Deposite \n";
    cout << "3 : Withdraw \n";
    cout << "4 : EXIT \n";
    cout << "========================================\n";
    cout << ">>> ";
}
void show_balance(){
    cout << "Your balance is : ₹" << balance << '\n';
}
void deposite(){
    double depo;
    cout << "Enter the amount to deposte : ₹" ; 
    cin >> depo;
    if (depo < 0){
        cout << " Enter a valid input\n";
        cout << "Current Blalance : ₹ " << balance << '\n';
    }
    else{
        balance += depo;
        cout << " ₹ " << depo << " has been deposited to your account \n" ;
        cout << "Current Blalance : ₹ " << balance << '\n';
    }
}
void withdraw(){
    double withdrew;
    cout << "Enter the amount to withdraw : ₹" ;
    cin >> withdrew;
    if (withdrew < 0){
        cout << " Enter a valid input\n";
        cout << "Current Blalance : ₹ " << balance << '\n';
    }
    else if (withdrew > balance){
        cout << "Insufficient balance\n";
        cout << "Current Blalance : ₹ " << balance << '\n';
    }
    else{
        balance -= withdrew;
        cout << " ₹ " << withdrew << " has been withdrawn to your account \n" ;
        cout << "Current Balance : ₹ " << balance << '\n';
    }
}