#include<iostream>
using namespace std;
int main()
{
	int age;
	cout<<"enter the age: ";
	cin>>age;
	if (age>=18)
	{
		cout<<"eligible for voting ";
	}
	else
	{
		cout<<"not eligible for voting \n";
		cout<<"years left to eligible for voting: "<<18-age;
		
	}
	return 0;
}
