#include <iostream>
using namespace std;
class small_set
{
private:
    int num = 32;
    int *Set = new int[num];

public:
    void init()
    {
        for (int i = 0; i < num; i++)
        {
            Set[i] = -1;
        }
    }
    void set(int item)
    {
        if (item >= 0 && item <= 31)
        {
            Set[item] = item;
            return;
        }
        else
        {
            cout << "Invalid Number" << endl;
            return;
        }
    }
    void clear(int item)
    {
        if (item >= 0 && item <= 31)
        {
            Set[item] = -1;
            return;
        }
        else
        {
            cout << "Invalid Number" << endl;
            return;
        }
    }
    int test(int num)
    {
        if(num == -1)
        {
            return 0;
        }
        else if (Set[num] == num)
        {
            return 1;
        }
        else
            return 0;
    }
};
int main()
{
    small_set a_set;
    a_set.init();
    a_set.set(3);
    a_set.set(5);
    a_set.set(5);
    cout << a_set.test(3)<< endl;
    cout << a_set.test(0)<< endl;
    cout << a_set.test(5) << endl;
    a_set.clear(5);
    cout << a_set.test(5) << endl;
    a_set.set(32);
    a_set.set(-5);
    cout << a_set.test(-1) << endl;
}