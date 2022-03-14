#include <iostream>
using namespace std;
class Heater
{
private:
    int temperature;

public:
    Heater()
    {
        temperature = 15;
        cout << "Temperature: " << temperature << endl;
    }
    ~Heater(){};
    void warmer()
    {
        temperature += 5;
        cout << "Temperature: " << temperature << endl;
    }
    void cooler()
    {
        temperature -= 5;
        cout << "Temperature: " << temperature << endl;
    }
};

int main()
{
    Heater h;
    int x = 20;
    while (x != 0)
    {
        cout << "Please enter your choice: " << endl;
        cout << "1. to increse temperature. " << endl;
        cout << "2. to decrease temperature." << endl;
        cout << "0. to exit." << endl;
        cin >> x;
        switch (x)
        {
        case 1:
            h.warmer();
            break;
        case 2:
            h.cooler();
            break;
        case 0:
            break;
        default:
            cout << "Incorrect value entered please try again!" << endl;
        }
    }
}