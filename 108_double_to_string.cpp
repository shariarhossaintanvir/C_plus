#include <iostream>
#include <string>
using namespace std;
int main() {
double num;
cout << "Enter a double number: ";
cin >> num;
string str = to_string(num);
cout << "String value: " << str << endl;
return 0;
}
