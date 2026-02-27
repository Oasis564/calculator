
#include <iostream>
using namespace std;

int main()
{
    float a, b;

    cout << "Enter the first number: ";
    cin >> a;

    cout << "Enter the second number: ";
    cin >> b;

    cout << " " << a << " * " << b << " = " << a * b << endl;
    cout << " " << a << " - " << b << " = " << a - b << endl;
    cout << " " << a << " + " << b << " = " << a + b << endl;
    cout << " " << a << " / " << b << " = " << a / b << endl;

    int total_apples, apples;
    // 24 is assigned to the total of all the apples
    total_apples = 24;

    cout << "Total number of apples: " << total_apples;
    cout << "Enter number of new apples bought from the store: ";
    cin >> apples;

    total_apples += apples;
    cout << "Total number of apples now: " << total_apples;


}

