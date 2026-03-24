#include <iostream>
#include <string>
using namespace std;
class teacher{
private:
    double salary;
public:
    //properties
    string name;
    string subject;
    string dept;
    //methods / members functions
    void change_dept(string new_dept){
        dept = new_dept;
    }
    //setter
    void change_salary(double new_salary){
        salary = new_salary;
    }
    //getter
    double get_salary(){
        return salary;
    }
};
class account{
private:
    double balance;
    string password;
public:
    string name;
    string email;    
};
int main() {
    teacher t1;
    teacher t2;
    teacher t3;
    t1.name = "John Doe";
    t1.subject = "Mathematics";
    t1.dept = "Science";
    t1.change_salary(25000.00);
    cout << "Teacher Name: " << t1.name << endl;
    cout << "Subject: " << t1.subject << endl;
    cout << "Salary: " << t1.get_salary() << endl;
    return 0;
}