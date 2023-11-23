//Sum of Numbers in a Given Interval
#include<bits/stdc++.h>

using namespace std;

int rf1(int x, int y) //Method 3: Using Recursive function and in this we expand and add the 1st no. of the interval to the last number of the interval.
{
    if(x>y)
        return 0;
    return x + rf1(x+1,y);
}
int rf2(int x, int y) //Method 4: In this recusive function method we decrese and add the last no. to is previous numbers until it reached the starting of the interval.
{
    if(y<x) //because we will reach at the starting
        return 0;
    return y + rf2(x,y-1);
}

int main()
{
    int f1,f2;
    int sum1=0, sum2=0, sum3=0, sum4=0; // sum1,2,3,4 is for different methods of solving this question.
    cout<<"Enter a range:"<<endl;
    cout<<"R1: ";
    cin>>f1;
    cout<<"R2: ";
    cin>>f2;

    //Method 1: Normal method Brute Force
    cout<<"This answer is from method 1"<<endl;
    for(int i=f1;i<=f2;i++){
        sum1+=i;
    }
    cout<<"Sum of numbers from "<<f1<<"to "<<f2<<"is: "<<sum1<<endl;

    //Method 2: By using Formula
    cout<<"This answer is from method 2"<<endl;
    sum2=f2*(f2+1)/2 - f1*(f1+1)/2;
    cout<<"Sum of numbers from "<<f1<<"to "<<f2<<"is: "<<sum2<<endl;

    //Method 3: Using Recursive Functions by increasing and adding the start of interval to the end of interval.
    cout<<"This answer is from method 3"<<endl;
    sum3= rf1(f1,f2);
    cout<<"Sum of numbers from "<<f1<<"to "<<f2<<"is: "<<sum3<<endl;

    //Method 4: Using the Recursive Function by decresing and adding the limit of interval to start of interval.
    cout<<"This answer is from method 4"<<endl;
    sum4 = rf2(f1,f2);
    cout<<"Sum of numbers from "<<f1<<"to "<<f2<<"is: "<<sum4<<endl;

    return 0;
}