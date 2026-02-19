#include <iostream>
using namespace std;
void switchDemo() {
    char day = 'M';
    switch (day) {
    case 'M':
        cout << "Monday" << endl;
        break;
    case 'T':
        cout << "Tuesday" << endl;
        break;
    case 'W':
        cout << "Wednesday" << endl;
        break;
    default:
        cout << "Invalid" << endl;
    }
}
int add(int a, int b){
    return a + b;
}
int main(){
    cout << "add(5, 3) = " << add(5, 3) << endl;
    switchDemo();
    for (int i = 0; i < 10; i++) {
        cout << i << "\t";
    }
    cout << endl;
    cout << "Range-based for loop: ";
    int num[] = {1,2,4,56,7,9};
    for (int i : num ){
        cout << i << "\t";
    }
    cout << endl;

    // =========================================================
    //  LAMBDA FUNCTIONS IN C++
    // =========================================================
    //
    //  Syntax:
    //    [capture](parameters) -> return_type { body }
    //
    //  Parts explained:
    //    [capture]   – which outside variables the lambda can use
    //                    []    = capture nothing
    //                    [=]   = capture everything by value (copy)
    //                    [&]   = capture everything by reference
    //                    [x]   = capture only x by value
    //                    [&x]  = capture only x by reference
    //    (params)    – just like a normal function's parameter list
    //    -> type     – (optional) the return type; usually auto-deduced
    //    { body }    – the code that runs when the lambda is called
    //
    //  A lambda is essentially an unnamed (anonymous) function you
    //  can define right where you need it — inside main(), inside
    //  another function, or even pass it to algorithms like sort().
    // =========================================================

    // --- 1. Simplest lambda: no capture, no parameters ----------
    auto greet = []() {
        cout << "\nHello from a lambda!" << endl;
    };
    greet();   // call it just like a normal function

    // --- 2. Lambda with parameters ------------------------------
    auto multiply = [](int a, int b) -> int {
        return a * b;
    };
    cout << "multiply(4, 5) = " << multiply(4, 5) << endl;

    // --- 3. Lambda that captures an outside variable by value ---
    int factor = 10;
    auto scale = [factor](int x) {
        // 'factor' is captured by value (a copy);
        // changing it here would NOT affect the outer 'factor'.
        return x * factor;
    };
    cout << "scale(7)  = " << scale(7)
         << "  (factor captured by value = " << factor << ")" << endl;

    // --- 4. Lambda that captures by reference -------------------
    int counter = 0;
    auto increment = [&counter]() {
        // '&counter' means we work on the ORIGINAL variable,
        // so changes here are visible outside the lambda.
        counter++;
    };
    increment();
    increment();
    increment();
    cout << "counter after 3 increments = " << counter << endl;

    // --- 5. Using a lambda with a loop (practical example) ------
    auto printSquare = [](int n) {
        cout << n << "^2 = " << n * n << "  ";
    };
    cout << "Squares: ";
    for (int i = 1; i <= 5; i++) {
        printSquare(i);
    }
    cout << endl;

    return 0;
}