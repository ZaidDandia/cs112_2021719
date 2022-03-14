#include <iostream>
using namespace std;
class parity
{
private:
    int number = 0;
    int *Array = new int[number];

public:
    parity(int num)
    {
        if (num < 0)
        {
            number = 0;
            cout << "Wrong number of input. default value of 0 is set.";
        }
        else
        {
            int val;
            cout << "Enter value: " << endl;
            for (int i = 0; i < num; i++)
            {
                cin >> val;
                Array[i] = val;
            }
        }
    }
    parity() : number(0){};
    ~parity()
    {
        delete[] Array;
    }
    void put(int num)
    {
        number += 1;
        int *temp = new int[number];
        for (int i = 0; i < number - 1; i++)
        {
            temp[i] = Array[i];
        }
        delete[] Array;
        Array = temp;
        Array[number - 1] = num;
    }
    void print()
    {
        for (int i = 0; i < number; i++)
        {
            cout << i + 1 << ". " << Array[i] << endl;
        }
    }
    void deleted()
    {
        if (number == 0)
        {
            return;
        }
        number -= 1;
        int *temp = new int[number];
        for (int i = 0; i < number + 1; i++)
        {
            temp[i] = Array[i];
        }
        delete[] Array;
        Array = temp;
    }
    int test()
    {
        if (number % 2 == 0)
        {
            return 1;
        }
        else
            return 0;
    }
};

int main()
{
    parity p;
    int x = 20;
    while (x != 0)
    {
        cout << "Please enter your choice: " << endl;
        cout << "1. to put value. " << endl;
        cout << "2. to print value." << endl;
        cout << "3. to delete value." << endl;
        cout << "4. to test value." << endl;
        cout << "0. to exit." << endl;
        cin >> x;
        switch (x)
        {
        case 1:
            int num;
            cout << "enter number: " << endl;
            cin >> num;
            p.put(num);
            break;
        case 2:
            p.print();
            break;
        case 3:
            p.deleted();
            break;
        case 4:
            cout << p.test() << endl;
            break;
        case 0:
            break;
        default:
            cout << "Incorrect value entered please try again!" << endl;
        }
    }
}