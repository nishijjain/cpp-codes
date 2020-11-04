#include<iostream>
using namespace std;
int main() {
    int x=5,y=6,t;

    cout<<"Before Swapping"<<'\n';
    cout<<"x = "<<x<<'\n';
    cout<<"y = "<<y<<'\n'; 

    // Using 3rd variable 
    t = x;
    x = y;
    y = t;

    cout<<"\nUsing 3 variables"<<'\n';
    cout<<"After Swapping"<<'\n';
    cout<<"x = "<<x<<'\n';
    cout<<"y = "<<y<<'\n';

    // Without using 3rd variable
    x=5;
    y=6;
    x = x+y;
    y = x-y;
    x = x-y;

    cout<<"\nUsing 2 variables"<<'\n';
    cout<<"After Swapping"<<'\n';
    cout<<"x = "<<x<<'\n';
    cout<<"y = "<<y<<'\n';
    
    return 0;
}