#include <iostream>
using namespace std;

int main()
{
    int size;
    int *numbers = new int[size];
    int *difference = new int[size - 1];
    cout << "Enter number of elements of the array: " << endl;
    cin >> size;
    while (size <= 1)
    {
        cout << "Please enter the size greater than 1: " << endl;
        cin >> size;
    }
    cout << "Enter the element of the array: " << endl;
    for (int j = 0; j < size; j++)
    {
        cin >> numbers[j];
    }
    for (int i = 0; i < size - 1; i++)
    {
        difference[i] = numbers[i + 1] - numbers[i];
    }
    cout << "The resultant array is: " << endl;
    for (int i = 0; i < size - 1; i++)
    {
        cout << difference[i] << " ";
    }
    cout << endl;
}