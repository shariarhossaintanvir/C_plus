#include <iostream>
using namespace std;
int main() {
    int N;
    cout << "Enter the value of N: ";
    cin >> N;
    cout << "Prime numbers from 1 to " << N << " are:\n";
    for (int i = 2; i <= N; i++) {
        bool isPrime = true;
        for (int j = 2; j < i; j++) {
        if (i % j == 0) {
        isPrime = false;
        break;
        }
    }
        if (isPrime) {
        cout << i << " ";
        }
    }
    cout << endl;
    return 0;
}
