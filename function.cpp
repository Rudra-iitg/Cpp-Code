#include <iostream>
using namespace std;
double volume (double length);
void happy(string name, int age){
    cout << "Happy Birthday to " << name << " " << age << endl;
    cout << "Happy Birthday to " << name << " " << age << endl;
    cout << "Happy Birthday to " << name << " " << age << endl;
    cout << "Happy Birthday to " << name << " " << age << endl;
}
void area(double length ){
    cout << "the total area is " << length * length << " cm^2 \n";
}
int main(){
    string name = "Ravi";
    int age = 13;
    happy(name, age);
    happy("Ram", age);
    double length = 14.4 ;
    area(length);   
    cout << "The volume of the cube is : " << volume(length) << " cm^3\n";  
return 0;
}
double volume (double length){
    return length * length * length;
}