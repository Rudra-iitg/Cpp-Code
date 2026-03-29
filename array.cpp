#include <iostream>
using namespace std;
double getTotal(double prices[], int size);
int searchArray(string name[], int array_size, string element);
int main(){
    string name[] = {"Ravi" , "Pawan" , "Rudra", "Ram" , "Naresh", "Deepa", "Dracid", "Mia Khalifa" , "Saditya", "Lavnasur"};
    cout << sizeof(string) << '\n';
    cout << sizeof(name) << '\n' ;
    int array_size = sizeof(name)/sizeof(name[2]) ;
    cout << "Total number of elements in the array : " << array_size << '\n';
    for (int i = 0; i < array_size ; i++  ){
        cout << name[i] << '\n';
    }
    cout << "FOREACH loop" << '\n';
    for(string name: name){
        cout << name << '\n';
    }
    double prices [] = {43, 45,565, 234, 34,56,45};
    int size = sizeof(prices)/sizeof(double);
    double total = getTotal(prices, size);
    cout << "The total cost is : ₹ " << total << '\n';
    cout << "+=+=+==+=+====+=+=+=+=+==+=+==+=++=+==+==+====\n";
    cout << "Enter the name which you want to find : " ;
    string element;
    getline(cin,  element);
    int index = searchArray(name, array_size, element);
    if (index == -1){
        cout << "Name not present\n";
    }
    else {
    cout << "The index of " << element << " is " << index << '\n';
    }
    return 0;
}
double getTotal(double prices[], int size){
    double total = 0;
    for (int i = 0; i < size ; i++ ){
        total += prices[i];
    }
    return total;
}
int searchArray(string name[], int array_size, string element){

     for (int i = 0; i < array_size; i++ ){
        if (name[i] == element){
            return i;
        }
     }
     return -1;
}