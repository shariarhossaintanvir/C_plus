#include <iostream>
#include <string>
using namespace std;
int main() {
float num;
cout << "Enter a float number: ";
cin >> num;
string str = to_string(num);
cout << "String value: " << str << endl;
return 0;
}
