#include<iostream>
using namespace std;
long factorial(int);
int main() { 
    int counter, n;
    cout << "Enter the Number :";
    cin>>n;   
    cout << n << " Factorial Value Is " << factorial(n);   
    return 0;
}
long factorial(int n) {
    int counter;
    long fact = 1;
    for (int counter = 1; counter <= n; counter++) {
        fact = fact * counter;
    }
    return fact;
}
