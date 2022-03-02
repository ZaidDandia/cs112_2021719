#include <iostream>
using namespace std;

int main()
{
    int size;
    int *array = new int[size];
    cout << "Enter the number of elements in the array: " << endl;
    cin >> size;
    while (size <= 1)
    {
        cout << "Please enter the size greater than 1: " << endl;
        cin >> size;
    }
    cout << "Enter the elements of the array: " << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> array[i];
    }
    int temp;
    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (array[i] > array[j])
            {
                temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }
        }
    }
    cout << "Secoond Lowest: "<< array[1] << endl;
    cout << "Secong Largest: "<< array[size-2] << endl;
}