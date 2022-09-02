#include<iostream>
using namespace std;
int main()
{
	float num1, num2;
	int result;
	cout << "what arithematic operation do you want to perform : \n";
	cout << "press 1 for addition \n";
	cout << "press 2 for subtraction \n";
	cout << "press 3 for multiplication \n";
	cout << "press 4 for division \n";
	cin >>result;
	cout << "enter two numbers : \n";
	cin >> num1 >> num2;
	switch (result)
	{
		
		case 1:
			cout << "the addition result is: "<<num1+num2;
			break;
		case 2:
			cout << "the subtraction result is: "<<num1-num2;
			break;
		case 3:
			cout << "the multiplication result is: "<<num1*num2;
			break;
		case 4:
			cout << "the division result is: "<<num1/num2;
			break;
    }
    return 0;
		
}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	

