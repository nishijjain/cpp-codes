#include <iostream>
using namespace std;
int main() {
    
    int n, num, digit,r=0;
    cout<<"Enter the number : ";
    cin>>num;
    n = num;
    while(num != 0) {
        digit = num%10;
        r = (r*10) + digit;
        num = num/10;
    }
    if(n == r)
        cout<<"The given number is a palindrome number";
    else
        cout<<"The given number is not a palindrome number";
    return 0;
}