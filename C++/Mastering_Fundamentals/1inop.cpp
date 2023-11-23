//C++ program for input and output.
//to check whether the character is upper case or lower case or invalid.

#include<iostream>
using namespace std;

int main() {

	char ch;
	cin>>ch;
	if(ch>='A'&&ch<='Z')
	{
		cout<<"upper case";
	}
	else if (ch>='a'&&ch<='z')
	{
		cout<<"small case";
	}
	else{
		cout<<"invalid";
	}
	return 0;
}
