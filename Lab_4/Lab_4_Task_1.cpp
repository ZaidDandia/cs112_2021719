#include<iostream>
using namespace std;

class Swap
{
private: 
    int A, B;
public: 
    void Setter()
    {
        cout << "Please enter A: "<< endl;
        cin >> A;
        cout << "Please enter B: "<< endl;
        cin >> B;
    }
    void Swapnumber()
    {
        A = A*B;
        B = A/B;
        A = A/B;
    }
    void Display()
    {
        cout << "A = " << A;
        cout << " & B = " << B << endl;
    }
};

int main()
{
    Swap swp;
    swp.Setter();
    cout << "Before swapping: ";
    swp.Display();
    swp.Swapnumber();
    cout << "After swapping: ";
    swp.Display();

}