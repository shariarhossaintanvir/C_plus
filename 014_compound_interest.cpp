#include <bits/stdc++.h>
using namespace std;
int main() {
double principal, rate, time, compoundInterest;
cout<<"Enter principal amount: ";
cin>>principal;
cout<<"Enter annual interest rate (in %): ";
cin>>rate;
cout<<"Enter time (in years): ";
cin>>time;
compoundInterest=principal*pow((1 + rate / 100),time)-principal;
cout<<"Compound Interest="<<compoundInterest<<endl;
return 0;
}
