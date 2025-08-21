#include <iostream>
using namespace std;
int number ;
int main (){
    cout<<"Enter a number : ";
    cin>>number;
    if (number % 2 == 0)
    cout<<number <<"is even." <<endl;
    cout<<number <<"is odd." << endl;
    return 0;
}