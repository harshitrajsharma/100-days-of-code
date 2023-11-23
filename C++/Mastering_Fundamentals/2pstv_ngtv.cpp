//C++ program to check no is positive, negative, or zero by using different methods.
#include<iostream>
using namespace std;

//we can solve this question using three methods.
//1. Simple Brute Force
//2. using if else
//3. using ternary operator

int main() {
    //Simple brute force method using if statements
    int n,m;
    string result;
    cout<<"Enter the number to check it is positive, negetive or zero."<<endl;
    cin>>n;
    cout<<"Enter your method to check"<<"\n1. Method 1"<<"\n2. Method 2"<<"\n3. Method 3"<<endl;
    cin>>m;
    switch (m)
    {
    case 1:
        //Method 1: Simple Bruter Force method using if else-if.
        if(n>0)
        {
            cout<<"Positive";
        }
        else if(n<0)
        {
            cout<<"Negative";
        }
        else{
            cout<<"Zero";
        }
        break;
    case 2:
        //Method 2: By using only if else statements
        if(n>=0){
            if(n==0)
            {
                cout<<"Zero";
            }
            else
            {
                cout<<"Postitve";
            }
        }
        else{
            cout<<"Negative";
        }
        
        break;
    case 3:
        if(n==0)
        {
            cout<<"Zero";
        }
        else
            (n>0)?cout<<"Positive":cout<<"Negative";
        break; 
    
    default:
        cout<<"Invalid Input";
        break;
    }

}