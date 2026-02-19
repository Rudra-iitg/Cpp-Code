#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <set>
#include <algorithm>
#include <fstream>
#include <memory>
#include <stdexcept>

// Forward declaration of classes for demonstration purposes
class Animal;
class Dog;

//==================================================================================================
// 1. BASIC SYNTAX & DATA TYPES
//==================================================================================================

void basicSyntaxAndDataTypes() {
    std::cout << "--- Basic Syntax & Data Types ---" << std::endl;

    // C++ programs start execution at the main function.
    // This file doesn't have a main function in the traditional sense to keep it modular.
    // Instead, we call functions demonstrating concepts from the actual main function at the bottom.

    // Single-line comment

    /*
     * Multi-line comment
     */

    // --- Variables and Data Types ---
    int age = 30;
    double weight = 75.5;
    char initial = 'J';
    bool isStudent = false;
    std::string name = "John Doe";

    std::cout << "Name: " << name << ", Age: " << age << ", Initial: " << initial
              << ", Weight: " << weight << ", Is Student: " << std::boolalpha << isStudent << std::endl;

    // --- Constants ---
    const double PI = 3.14159;
    std::cout << "The value of PI is: " << PI << std::endl;

    // --- Basic Input ---
    // std::cout << "Enter your age: ";
    // std::cin >> age;
    // std::cout << "You entered: " << age << std::endl;
}

//==================================================================================================
// 2. OPERATORS
//==================================================================================================

void operatorsDemo() {
    std::cout << "\n--- Operators ---" << std::endl;

    int a = 10, b = 3;

    // --- Arithmetic Operators ---
    std::cout << "a + b = " << (a + b) << std::endl;
    std::cout << "a - b = " << (a - b) << std::endl;
    std::cout << "a * b = " << (a * b) << std::endl;
    std::cout << "a / b = " << (a / b) << " (integer division)" << std::endl;
    std::cout << "a % b = " << (a % b) << " (modulo)" << std::endl;

    // --- Assignment Operators ---
    int c = 5;
    c += 2; // c is now 7
    std::cout << "c += 2 gives: " << c << std::endl;

    // --- Comparison Operators ---
    std::cout << "a == b is " << std::boolalpha << (a == b) << std::endl;
    std::cout << "a != b is " << std::boolalpha << (a != b) << std::endl;

    // --- Logical Operators ---
    bool x = true, y = false;
    std::cout << "x && y is " << std::boolalpha << (x && y) << std::endl;
    std::cout << "x || y is " << std::boolalpha << (x || y) << std::endl;
    std::cout << "!x is " << std::boolalpha << !x << std::endl;
}

//==================================================================================================
// 3. CONTROL FLOW
//==================================================================================================

void controlFlowDemo() {
    std::cout << "\n--- Control Flow ---" << std::endl;

    // --- If-Else If-Else ---
    int score = 85;
    if (score >= 90) {
        std::cout << "Grade: A" << std::endl;
    } else if (score >= 80) {
        std::cout << "Grade: B" << std::endl;
    } else {
        std::cout << "Grade: C or lower" << std::endl;
    }

    // --- Switch Statement ---
    char grade = 'B';
    switch (grade) {
        case 'A':
            std::cout << "Excellent!" << std::endl;
            break;
        case 'B':
            std::cout << "Good job!" << std::endl;
            break;
        default:
            std::cout << "Keep trying!" << std::endl;
    }

    // --- For Loop ---
    std::cout << "For loop: ";
    for (int i = 0; i < 5; ++i) {
        std::cout << i << " ";
    }
    std::cout << std::endl;

    // --- Range-based For Loop (C++11) ---
    std::cout << "Range-based for loop: ";
    int numbers[] = {1, 2, 3, 4, 5};
    for (int num : numbers) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    // --- While Loop ---
    std::cout << "While loop: ";
    int i = 0;
    while (i < 5) {
        std::cout << i << " ";
        i++;
    }
    std::cout << std::endl;

    // --- Do-While Loop ---
    std::cout << "Do-while loop: ";
    i = 0;
    do {
        std::cout << i << " ";
        i++;
    } while (i < 5);
    std::cout << std::endl;
}

//==================================================================================================
// 4. FUNCTIONS
//==================================================================================================

// --- Function Declaration ---
int add(int a, int b);

// --- Pass-by-reference ---
void increment(int& num) {
    num++;
}

// --- Pass-by-pointer ---
void decrement(int* num) {
    (*num)--;
}

// --- Function Overloading ---
double add(double a, double b) {
    return a + b;
}

// --- Recursion ---
int factorial(int n) {
    if (n <= 1) return 1;
    return n * factorial(n - 1);
}

void functionsDemo() {
    std::cout << "\n--- Functions ---" << std::endl;

    // --- Function Call ---
    std::cout << "add(5, 3) = " << add(5, 3) << std::endl;
    std::cout << "add(5.5, 3.3) = " << add(5.5, 3.3) << std::endl;

    int x = 10;
    increment(x);
    std::cout << "x after increment: " << x << std::endl;

    decrement(&x);
    std::cout << "x after decrement: " << x << std::endl;

    std::cout << "Factorial of 5 is: " << factorial(5) << std::endl;

    // --- Lambda Functions (C++11) ---
    auto square = [](int num) { return num * num; };
    std::cout << "Square of 4 is: " << square(4) << std::endl;
}

// --- Function Definition ---
int add(int a, int b) {
    return a + b;
}

//==================================================================================================
// 5. ARRAYS, POINTERS, AND VECTORS
//==================================================================================================

void arraysAndPointersDemo() {
    std::cout << "\n--- Arrays, Pointers, and Vectors ---" << std::endl;

    // --- C-style Arrays ---
    int arr[5] = {10, 20, 30, 40, 50};
    std::cout << "First element of arr: " << arr[0] << std::endl;

    // --- Pointers ---
    int* ptr = arr; // Pointer to the first element of arr
    std::cout << "Value at ptr: " << *ptr << std::endl;
    ptr++; // Pointer arithmetic
    std::cout << "Value at ptr after increment: " << *ptr << std::endl;

    // --- Dynamic Memory Allocation ---
    int* dynamic_arr = new int[3];
    dynamic_arr[0] = 1;
    dynamic_arr[1] = 2;
    dynamic_arr[2] = 3;
    std::cout << "Dynamically allocated array: " << dynamic_arr[0] << " " << dynamic_arr[1] << std::endl;
    delete[] dynamic_arr; // Don't forget to free the memory!

    // --- std::vector (safer and more flexible) ---
    std::vector<int> vec = {1, 2, 3, 4, 5};
    vec.push_back(6);
    std::cout << "Vector elements: ";
    for (int val : vec) {
        std::cout << val << " ";
    }
    std::cout << std::endl;
}

//==================================================================================================
// 6. OBJECT-ORIENTED PROGRAMMING (OOP)
//==================================================================================================

// --- Class Definition ---
class Animal {
protected: // Accessible by this class and derived classes
    std::string name;

public: // Accessible from anywhere
    // --- Constructor ---
    Animal(const std::string& name) : name(name) {
        std::cout << "Animal constructor called for " << name << std::endl;
    }

    // --- Destructor ---
    virtual ~Animal() {
        std::cout << "Animal destructor called for " << name << std::endl;
    }

    // --- Member Function ---
    virtual void makeSound() const { // virtual allows overriding by derived classes
        std::cout << name << " makes a sound." << std::endl;
    }

    // --- Friend Function Declaration ---
    friend void printAnimalName(const Animal& animal);
};

// --- Inheritance ---
class Dog : public Animal {
private: // Accessible only by this class
    std::string breed;

public:
    Dog(const std::string& name, const std::string& breed) : Animal(name), breed(breed) {
        std::cout << "Dog constructor called for " << name << std::endl;
    }

    ~Dog() {
        std::cout << "Dog destructor called for " << name << std::endl;
    }

    // --- Overriding a virtual function ---
    void makeSound() const override {
        std::cout << name << " (a " << breed << ") barks." << std::endl;
    }
};

// --- Friend Function Definition ---
void printAnimalName(const Animal& animal) {
    std::cout << "Friend function accessing private member: " << animal.name << std::endl;
}

void oopDemo() {
    std::cout << "\n--- Object-Oriented Programming ---" << std::endl;

    // --- Object Creation ---
    Animal genericAnimal("Generic Animal");
    Dog myDog("Buddy", "Golden Retriever");

    genericAnimal.makeSound();
    myDog.makeSound();

    // --- Polymorphism ---
    std::cout << "\n--- Polymorphism ---" << std::endl;
    Animal* animalPtr = &myDog; // Pointer of base class type pointing to derived class object
    animalPtr->makeSound(); // Calls the Dog's version of makeSound()

    printAnimalName(myDog);
}

//==================================================================================================
// 7. STANDARD TEMPLATE LIBRARY (STL)
//==================================================================================================

void stlDemo() {
    std::cout << "\n--- Standard Template Library (STL) ---" << std::endl;

    // --- std::vector ---
    std::vector<int> vec = {3, 1, 4, 1, 5, 9};
    std::cout << "Vector: ";
    for (int i : vec) std::cout << i << " ";
    std::cout << std::endl;

    // --- std::map (key-value pairs) ---
    std::map<std::string, int> ages;
    ages["Alice"] = 30;
    ages["Bob"] = 25;
    std::cout << "Alice's age: " << ages["Alice"] << std::endl;

    // --- std::set (unique sorted elements) ---
    std::set<int> mySet = {5, 2, 8, 2, 5};
    std::cout << "Set: ";
    for (int i : mySet) std::cout << i << " ";
    std::cout << std::endl;

    // --- STL Algorithms ---
    std::sort(vec.begin(), vec.end());
    std::cout << "Sorted vector: ";
    for (int i : vec) std::cout << i << " ";
    std::cout << std::endl;

    auto it = std::find(vec.begin(), vec.end(), 4);
    if (it != vec.end()) {
        std::cout << "Found 4 in the vector." << std::endl;
    }
}

//==================================================================================================
// 8. ADVANCED CONCEPTS
//==================================================================================================

// --- Function Template ---
template <typename T>
T maxVal(T a, T b) {
    return (a > b) ? a : b;
}

// --- Class Template ---
template <typename T>
class Box {
private:
    T content;
public:
    void setContent(const T& content) { this->content = content; }
    T getContent() const { return content; }
};

void advancedConceptsDemo() {
    std::cout << "\n--- Advanced Concepts ---" << std::endl;

    // --- Templates ---
    std::cout << "maxVal(5, 10) = " << maxVal(5, 10) << std::endl;
    std::cout << "maxVal(5.5, 3.3) = " << maxVal(5.5, 3.3) << std::endl;

    Box<int> intBox;
    intBox.setContent(123);
    std::cout << "Integer box content: " << intBox.getContent() << std::endl;

    Box<std::string> stringBox;
    stringBox.setContent("Hello C++");
    std::cout << "String box content: " << stringBox.getContent() << std::endl;

    // --- Exception Handling ---
    try {
        throw std::runtime_error("This is a test exception.");
    } catch (const std::exception& e) {
        std::cout << "Caught exception: " << e.what() << std::endl;
    }

    // --- Smart Pointers (C++11) ---
    // std::unique_ptr: exclusive ownership
    std::unique_ptr<Dog> uniqueDog = std::make_unique<Dog>("Unique Dog", "Beagle");
    uniqueDog->makeSound();
    // std::shared_ptr: shared ownership
    std::shared_ptr<Dog> sharedDog1 = std::make_shared<Dog>("Shared Dog", "Poodle");
    std::shared_ptr<Dog> sharedDog2 = sharedDog1;
    std::cout << "Shared pointer use count: " << sharedDog1.use_count() << std::endl;

    // --- File I/O ---
    std::ofstream outFile("test.txt");
    if (outFile.is_open()) {
        outFile << "Hello from C++ file I/O." << std::endl;
        outFile.close();
    }
    std::ifstream inFile("test.txt");
    std::string line;
    if (inFile.is_open()) {
        while (getline(inFile, line)) {
            std::cout << "Read from file: " << line << std::endl;
        }
        inFile.close();
    }
}

//==================================================================================================
// MAIN FUNCTION
//==================================================================================================

int main() {
    basicSyntaxAndDataTypes();
    operatorsDemo();
    controlFlowDemo();
    functionsDemo();
    arraysAndPointersDemo();
    oopDemo();
    stlDemo();
    advancedConceptsDemo();

    return 0;
}
