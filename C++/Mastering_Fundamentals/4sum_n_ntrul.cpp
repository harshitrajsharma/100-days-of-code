//Sum of first n natural numbers
#include<bits/stdc++.h>
using namespace std;

    int getSum(int n) //this is for recursive function method. 
    {
        if(n==0)
        return n;
        
        return n+getSum(n-1);
    }

int main()
{
    int n;
    int sum1=0; //for method 1
    int sum2=0; //for method 2
    int sum3=0; //for method 3
    cin>>n;

    //Method 1: Using for loopl.
    cout<<"This answer is from method 1"<<endl;
    for(int i=0;i<=n;i++)
    {
        sum1+=i;
    }
    cout<<"The Sum of "<<n<<" mumbers is: "<<sum1<<endl;

    //Method 2: Using formula of sum of n numbers
    cout<<"This answer is from method 2"<<endl;
    sum2=n*(n+1)/2;
    cout<<"The Sum of "<<n<<" mumbers is: "<<sum2<<endl;

    //Method 3: Using Recurssion
    cout<<"This answer is from method 3"<<endl;
    sum3= getSum(n);
    cout<<"The Sum of "<<n<<" mumbers is: "<<sum2<<endl;
    return 0;
}
