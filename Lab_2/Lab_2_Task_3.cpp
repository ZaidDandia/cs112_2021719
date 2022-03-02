#include<iostream>
using namespace std;
#define size 100

int integer(char num)
{
	if (num >= '0' && num <= '9')
		return (int)(num - '0');
	else
		return (int)(num - 'A' + 10);
}
int to_decimal(char num[], int base)
{
	int length = strlen(num);
	int base1 = 1, dec = 0;
	for (int i = length-1; i >= 0; i--)
	{
		int number = integer(num[i]);
		if (number >= base)
		{
			return -1;
		}
		else
		{
			dec += number * base1;
			base1 = base1 * base;
		}
	}
	return dec;
}
void convert(int result, int base, char num1[], char num2[])
{
	if (base == 2)
	{
		int rem, bin_val = 0, base1 = 1;
		while (result > 0)
		{
			rem = result % 2;
			result /= 2;
			bin_val += (rem * base1);
			base1 *= 10;
		}
		cout << "The answer is: " << endl;
		cout << "(" << num1 << ") + (" << num2 << ") = " << bin_val;
	}
	else if (base == 8)
	{
		int rem, i = 0, oct_val = 0, base1=1;
		while (result > 0)
		{
			rem = result % 8;
			oct_val += + rem * base1;
			result /= 8;
			base1 *= 10;
		}
		cout << "The answer is: " << endl;
		cout << "(" << num1 << ") + (" << num2 << ") = " << oct_val;
	}
	else if (base == 16)
	{
		char converter[size];
		int i = 0;
		while (result > 0)
		{
			int rem = 0;
			rem = result % 16;
			result /= 16;
			if (rem < 10)
			{
				converter[i] = (rem + 48);
				i++;
			}
			else {
				converter[i] = (rem + 55);
				i++;
			}

		}
		cout << "The answer is: " << endl;
		cout << "(" << num1 << ") + (" << num2 << ") = ";
		for (int j = i - 1; j >= 0; j--)
		{
			cout << converter[j];
		}

	}
	else
	{
		cout << "The answer is: " << endl;
		cout << "(" << num1 << ") + (" << num2 << ") = " << result;
	}
	
}
int main()
{
	char num1[size], num2[size];
	int base;
	cout << "Enter base system: " << endl;
	cin >> base;
	bool base_ = false;
	while (base_ == false)
	{
		
		if (base == 2 || base == 8 || base == 10 || base == 16)
		{
			base_ = true;
		}
		else
		{
			cout << "Invalid base enetered! Try again: ";
			cin >> base;
			base_ = false;
		}

	}
	cout << "Enter number 1 with base: " << endl;
	cin >> num1;
	int num_1 = to_decimal(num1, base);
	while (num_1 == -1)
	{
		cout << "Invalid Number entered! Try again: ";
		cin >> num1;
		num_1 = to_decimal(num1, base);
	}
	cout << "Enter number 2 with base: " << endl;
	cin >> num2;
	int num_2 = to_decimal(num2, base);
	while (num_2 == -1)
	{
		cout << "Invalid Number entered! Try again: ";
		cin >> num2;
		num_2 = to_decimal(num2, base);
	}
	//int result = num_1 + num_2;
	int carry;
	while (num_2 != 0) {
		carry = num_1 & num_2;
		num_1 = num_1 ^ num_2;
		num_2 = carry << 1;
	}
	convert(num_1, base, num1, num2);
	return 0;
}