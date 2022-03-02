#include <iostream>
using namespace std;

int main()
{
    int size;
    int *array = new int[size];
    cout << "Enter the number of elements in the array: " << endl;
    cin >> size;
    while (size <= 0)
    {
        cout << "Please enter the size greater than 0: " << endl;
        cin >> size;
    }
    cout << "Enter the elements in the array: " << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> array[i];
    }
    int *newarr = new int[size];
    int j = 0;
    for (int i = 0; i < size; i++)
    {
        if (array[i] > 0)
        {
            newarr[j] = array[i];
            j++;
        }
    }
    for (int i = 0; i < size; i++)
    {
        if (array[i] < 0)
        {
            newarr[j] = array[i];
            j++;
        }
    }
    for (int i = 0; i < size; i++)
    {
        cout << newarr[i] << " ";
    }
    cout << endl;
    return 0;
}