#include <iostream>
using namespace std;

#define func(num1, num2) (num1 * (2<<(num2-1)));

int main()
{	
	int num1, num2;
	cout << "Enter the first number: ";
	cin >> num1;
	cout << "Enter the second number: ";
	cin >> num2;
	while (num2 < 0)
	{
		cout << "Enter the second number greater than 0: ";
		cin >> num2;
	}
	if (num2 == 0)
	{
		cout <<"The answer is: " << num1;
	}
	else {
		int x = func(num1, num2);
		cout <<"The answer is: " << x;
	}
}
