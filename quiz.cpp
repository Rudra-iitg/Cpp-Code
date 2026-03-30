#include <iostream>
using namespace std;
int main(){
    string question[] = {"Who is the first PM ?",
                         "When did India get independent ?",
                        "What is the symbol of Sodium ?",
                        "Who is my sister ? "};
    string options[] = { "a. Rajendra Prasad   b. Jawaharlal Nehru     c. Modi    d. None ",
                        "a. 1950    b. 2026      c. 1857     d. 1947",
                        "a. 'K'    b. 'Na'     c. 'Si'     d. 'N'",
                        "a. Manshi     b. Rudra    c. Mum    d. No one"};
    char correct_answers[] = {'b' , 'd' , 'b' , 'a'};
    int size = sizeof(question)/sizeof(question[0]);
    char answer[4];
    for (int i = 0; i < size ; i ++ ){
        cout << question[i] << '\n';
        cout << options[i] << '\n';
        cin >> answer[i] ;
    }
    cout << "Your selected option are: ";
    for(char ans :answer){
        cout << ans << '\t';
    }
    cout << endl;
    int result = 0;
    for (int i = 0 ; i < size; i++){
        if (answer[i] == correct_answers[i]){
            result++;
        }
    }
    cout << "So the correct percentage is : " << (result *100 /size) << "%"<<'\n';

 return 0;   
}