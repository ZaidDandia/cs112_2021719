#include <iostream>
using namespace std;
#include<bitset>
#define and(num, num2) (num & num2);
void power_of(int x)
{
    int y = x - 1;
    int result = and (x, y);
    if (result == 0)
    {
        cout << "Yes " << x << " is the power of 2" << endl;
    }
    else
    {
        cout << "No " << x << " is not the power of 2" << endl;
    }
}
int main()
{
    bool answer;
    int x;
    cout << "Please enter Number: ";
    cin >> x;
    while (x <= 0)
    {
        cout << "Please enter a number greater than 0";
        cin >> x;
    }
    power_of(x);
        
}
