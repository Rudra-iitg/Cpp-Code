#include <iostream>
using namespace std;

struct student {
    string name;
    double gpa;
    bool enrolled;
};
struct cars{
    string name;
    int data;
    string colour;
    };

void printcars(cars &car);

int main(){
    student student1;
    student1.name = "Ruddra";
    student1.gpa = 9.6;
    student1.enrolled = true;

    cout << student1.name << '\n';
    cout << student1.gpa << '\n';
    cout << student1.enrolled << '\n';

    student student2;
    student2.name = "Manshi";
    student2.enrolled = true;

    cout << student2.name << '\n';
    cout << student2.gpa << '\n';
    cout << student2.enrolled << '\n';

    cars car1;
    cars car2;
    car1.name = "Buggari" ;
    car2.name = "Tara" ;
    car1.data = 1945;
    car2.data = 1947;
    car1.colour = "Red";
    car2.colour = "Black";

    printcars(car1);
    cout << & car1;
    return 0;
}
void printcars(cars &car){
    cout << &car << '\n';
    cout << car.name << '\n';
    cout << car.data << '\n';
    cout << car.colour << '\n';
}
