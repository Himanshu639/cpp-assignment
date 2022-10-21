#include <iostream>
using namespace std;

int main()
{   
    int n,m,i,check=0;
    cout << "Enter the number to check prime: ";  
    cin >> n;  
    m=n/2;  
    for(i = 2; i <= m; i++)  
    {  
        if(n % i == 0)  
        {  
            check++;
        }
    }

    if(check==0) {
        cout<<"The number is prime.";
    } else {
        cout<<"The number is not prime.";
    }
    return 0;    
}