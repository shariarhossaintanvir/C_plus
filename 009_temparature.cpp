#include <iostream>
using namespace std;
int main() {
    float fahrenheit, celsius;
    cout << "Enter temperature in Fahrenheit: ";
    cin >> fahrenheit;
    celsius = (fahrenheit - 32) * 5.0 / 9.0;
    cout << "Temperature in Celsius: " << celsius << endl;
    return 0;
}
