#include <iostream>
using namespace std;
int main() {
    int n, flag=0;
    cout << "Enter a number: ";
    cin >> n;

    for(int i=2;i*i<=n;i++)
        if(n%i==0){flag=1; break;}

    cout << (n>1 && flag==0 ? "Prime\n" : "Not Prime\n");
}