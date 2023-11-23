#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    //Method 1: Simple method using if else
    cout<<"This answer is using if-else statements"<<endl;
    if(n%2==0)
    {
        cout<<"Even."<<endl;
    }
    else{
        cout<<"Odd."<<endl;
    }
    
    //Method 2: Using ternery operator
    cout<<"This answer is using Ternery Operator."<<endl;
    (n%2==0)?cout<<"Even"<<endl:cout<<"Odd"<<endl;

    //Method 3: Using Bitwise operator
    cout<<"This method is using Bitwise Operators"<<endl;
    if((n&1))
        cout<<"Odd"<<endl; //because if [(n&1)=1 (i.e the no. is odd)] and the if statement will become true. So Odd is printed.
    else
        cout<<"Even"<<endl; //similarly (n&1)=0 that means no. is even and if statement will become false.

    return 0;
}