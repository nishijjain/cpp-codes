#include <iostream>
using namespace std;
int main() {
    
    cout<<"Enter the number of terms : ";
    int n, f0=0, f1=1, next;
    cin>>n;
    for(int i=0;i<n;i++) {
        cout<<f0<<" ";
        next = f0 + f1;
        f0 = f1;
        f1 = next;
    }
    return 0;
}