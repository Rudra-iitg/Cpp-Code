#include <iostream>
using namespace std;
char userchoice();
char compchoice();
void showchoice(char choice);
void winner(char player, char comp);
int main() {
    char player;
    char comp;
    player = userchoice();
    cout << "Your choice : " ;
    showchoice(player);
    comp = compchoice();
    cout << "Computer Choive : " << comp << '\n'; 
    winner(player, comp);
    return 0;
}
char userchoice(){
    
    char player;
    cout << "Welocme to ROCK = PAPER = SCISSOR \n" ;
    cout << "**********************************\n";
    do{
        cout << "Choose :\n R for Rock\n P for Paper\n S for Scissor\n"; 
        cin >> player;
        }while(player != 'r' && player != 'p' && player != 's');
    return player;

}
char compchoice(){
    srand(time(0));
    int num = rand() % 3 + 1;
    switch (num){
        case 1: return 'r';
        break;
        case 2: return 'p';
        break;
        case 3: return 's';
        break;
    }
}
void showchoice(char choice){
    switch(choice){
        case 'r' : cout << "Rock\n";
        break;
        case 'p' : cout << "Paper\n";
        break;
        case 's' : cout << "Scissor\n";
        break;
        default  : cout << "Invalid";
        }
}
void winner(char player, char comp){
    if (player == comp) {
        cout << "Its a tie\n";
    }
    else if ((player == 'r' && comp == 's') || (player == 'p' && comp == 'r') || (player == 's' && comp == 'p'))
    {
        cout << "User won\n"; 
    }
    else{
        cout << "User lost\n";
    }
    
}