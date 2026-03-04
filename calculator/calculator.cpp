
#include <iostream>
using namespace std;

void calc() {
    float a, b;

    cout << "Enter the first number: ";
    cin >> a;

    cout << "Enter the second number: ";
    cin >> b;

    cout << " " << a << " * " << b << " = " << a * b << endl;
    cout << " " << a << " - " << b << " = " << a - b << endl;
    cout << " " << a << " + " << b << " = " << a + b << endl;
    cout << " " << a << " / " << b << " = " << a / b << endl;

    int total_apples, apples, eaten_apples;
    // 24 is assigned to the total of all the apples
    total_apples = 24;

    cout << "Total number of apples: " << total_apples;
    cout << "Enter number of new apples bought from the store: " << endl;
    cin >> apples;

    total_apples += apples;
    cout << "Total number of apples now: " << total_apples << endl;

    cout << "Enter the number of apples eaten: " << endl;
    cin >> eaten_apples;

    total_apples -= eaten_apples;
    cout << "Your total apples now are: " << total_apples << endl;
}

void logival() {

}


void comparison()
{
    int a, b;
    a = 10;
    b = 50;

    bool result;

    // ==
    // false
    result = a == b;
    cout << a << " == " << b << " is: " << (result ? "True" : "False") << endl;

    // !=
    // true
    result = a != b;
    cout << a << " != " << b << " is: " << (result ? "True" : "False") << endl;

    // <
    // true
    result = a < b;
    cout << a << " < " << b << " is: " << (result ? "True" : "False") << endl;

    // <=
    // true
    result = a <= b;
    cout << a << " <= " << b << " is: " << (result ? "True" : "False") << endl;

    // >
    // false
    result = a < b;
    cout << a << " > " << b << " is: " << (result ? "True" : "False") << endl;

    // >=
    /// false
    result = a < b;
    cout << a << " >= " << b << " is: " << (result ? "True" : "False") << endl;

}

int main()
{
    //calc();
    comparison();
}


