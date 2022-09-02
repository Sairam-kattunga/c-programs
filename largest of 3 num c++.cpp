#include<iostream>
using namespace std;
int main()
{
	int a,b,c;
	cout<<"Enter the three given numbers: \n";
	cout<<"Enter the first number: ";
	cin>>a;
	cout<<"Enter the second number: ";
	cin>>b;
	cout<<"Enter the third number: ";
	cin>>c;
	if (a>b && a>c)
	{
		cout<<a <<" is greater than "<<b <<" and "<<c;
	}
	else if (b>a && b>c)
	{
		cout<<b <<" is greater than "<<a <<" and "<<c;
	}
	else if (c>a && c>b)
	{
		cout<<c <<"is greater than"<<a <<"and"<<b;
	}
	else
	{
		cout<<"invalid";
	}
	return 0;
	
}
