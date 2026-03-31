#include <iostream>
using namespace std;

class Animal{
    public:
            bool alive = true;
    void can_eat(){
        cout << "they can eat\n";
        };
};
class Cat : public Animal{
    
};
int main(){
    Cat cat1;
    cout << cat1.alive << '\n';
    cat1.can_eat();
    return 0;
}