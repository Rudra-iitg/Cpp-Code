#include <iostream>
using namespace std;
int main(){
    int age =21;
    string name = "Praveen";
    int *page = &age;
    string *pname = &name;
    cout << *page << '\n';
    cout << page << '\n';
    cout << *pname << '\n';
    cout << pname << '\n';
    cout << "**************Dynamic Memory*****************\n";
    int *pNUM  = NULL;
    pNUM = new int;
    *pNUM = 32;
    cout << pNUM << '\n';
    cout << *pNUM << '\n';
    cout << &pNUM << '\n';
    delete pNUM;
    cout << "*************Creating Dynamic Array\n";
    char *pMarks = NULL;
    int size;
    cout << "How many marks will be there ? \n";
    cin >> size;
    pMarks = new char[size];
    for (int i = 0; i < size ; i++){
        cout << "Enter grade #  " << i + 1 << " : ";
        cin >> pMarks[i];
    }
    for (int i = 0; i < size ; i++){
        cout << pMarks[i] << '\t';
    }
    delete[] pMarks;
    return 0;
}