#include <iostream>
using namespace std;

class student{
    public:
            string name;
            int age;
            int grade;
    student(string name, int age , int grade){
        this -> name = name;
        this -> age = age;
        this -> grade = grade;
    }
};
int main(){
    student student1("Rohit", 34, 5);
    cout << student1.name << '\n';
    cout << student1.age << '\n';
    cout << student1.grade << '\n';
    return 0;
}