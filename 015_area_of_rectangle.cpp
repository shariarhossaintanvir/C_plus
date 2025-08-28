#include <iostream>
using namespace std;
int main() {
float length, width, area, perimeter;
cout << "Enter the length of the rectangle: ";
cin >> length;
cout << "Enter the width of the rectangle: ";
cin >> width;
area = length * width;
perimeter = 2 * (length + width);
cout << "Area of Rectangle = " << area << endl;
cout << "Perimeter of Rectangle = " << perimeter << endl;
return 0;
}
