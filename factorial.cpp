#include <iostream>
using namespace std;
int main() {
    
    cout<<"Enter the number : ";
    int x,fact;
    cin>>x;
    fact = x;
    while(x>1) {
        x--;
        fact = fact * x;
    }
    cout<<"Factorial = "<<fact;
    return 0;
}