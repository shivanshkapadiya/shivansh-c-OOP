#include <iostream>
using namespace std;


template <typename T>
void swap_values(T& a, T& b) {
    T temp = a;
    a = b;
    b = temp;
}

int main() {
    int num1, num2;
    cout << "Enter two integers: ";
    cin >> num1 >> num2;


    swap_values(num1, num2);
    cout << "Swapped integers: " << num1 << " " << num2 << endl;

    double deci1, deci2;
    cout << "Enter two decimal numbers: ";
    cin >> deci1 >> deci2;

 
    swap_values(deci1, deci2);
    cout << "Swapped doubles: " << deci1 << " " << deci2 << endl;

    return 0;
}

