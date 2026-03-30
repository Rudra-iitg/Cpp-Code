#include <iostream>
using namespace std;
void walk_iterative(int step);
void walk_recursive(int step);
int factorial(int num);
int main(){
    cout << ":::::::::::::::::::  ITERATIVE ::::::::::::::::::::\n";
    walk_iterative(20);
    cout << ":::::::::::::::::::  RECURSIVE ::::::::::::::::::::\n";
    walk_recursive(10);
    cout << ":::::::::::::::::::  FACTORIAL ::::::::::::::::::::\n";
    cout << factorial(15) << '\n';
    return 0;
}
void walk_iterative(int step){
    for (int i = 0; i < step ; i++){
        cout << "U took a step iteratively\n";
    }
}
// ::::::::::::Recursive Approach :::::::::::::::::
void walk_recursive(int step){
    if(step > 0){
        cout << "You took a step recursively\n";
        walk_recursive(step - 1);
    }
}
int factorial(int num){
    // :::::::::::  ITERATIVE ::::::::::::::::
    // int result = 1;
    // for(int i = 1; i <= num ; i++){
    //     result = result * i;
    // }
    // return result;

    // :::::::::::  RECURSIVE ::::::::::::::::
    if(num > 1){
        return num * factorial(num - 1);
    }
    else{
        return 1;
    }
}
