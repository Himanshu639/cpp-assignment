#include <iostream>
using namespace std;

int main()
{
    int no1, no2;
    cout<<"Enter two numbers: ";
    cin>>no1>>no2;
    if (no1==no2) {
        cout<<"Two numbers are equal";
    } else {
        cout<<"Two numbers are not equal";
    }
    return 0;
}