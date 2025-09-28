#include <iostream>
using namespace std;
int main() {
int num, i;
cout<<"Enter a Number : ";
cin >> num;
for (i = 2; i < num; i++)
if (num % i == 0) 
break;
if (num > 1 && i == num)
cout << "Prime";
 else
 cout << "Not Prime";
}
