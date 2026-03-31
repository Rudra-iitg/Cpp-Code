#include <iostream>
using namespace std;

class human{
    public:
            string name;
            string occupation;
            int age;

    void eat(){
        cout << "This person can eat.\n";
    }
    void drink(){
        cout << "This person can drink.\n";
    }
    void sleep(){
        cout << "This person can sleep.\n";
    }
};
class car{
    public:
    // We can directly set a default value her
            string name = "Suzuki";
            string model = "Breeza" ;
            string colour = "White";
        void carmove(){
            cout << "The car can move\n";
        }

};
int main(){
    human human1;
    human human2;
    human1.name = "Parwati";
    human1.age = 423;
    human1.occupation = "CEO";
    cout << human1.name << '\n';
    cout << human1.occupation << '\n';
    cout << human1.age << '\n';
    human1.eat();
    human1.drink();
    human1.sleep();
    car car1;
    cout << car1.name << '\n';
    cout << car1.model << '\n';
    cout << car1.colour << '\n';
    car1.carmove();
    return 0;
}