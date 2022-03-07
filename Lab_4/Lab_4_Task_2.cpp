#include <iostream>
using namespace std;

class twoDArray
{
private:
    int size = 3;
    int **A;

public:
    void Initialize(int x = 0)
    {
        A = new int *[size];
        for (int i = 0; i < size; i++)
        {
            A[i] = new int[size];
        }
        cout << "Enter the values of the array: " << endl;
        for (int i = 0; i < size; i++)
        {
            for (int j = 0; j < size; j++)
            {
                if (x==0)
                {
                    cin >> A[i][j];
                }
                else
                    A[i][j] = 0;
            }
        }
    }
    void Print()
    {
        cout << "Entered Matrix is: "<< endl;
        for (int i = 0; i < size; i++)
        {
            for (int j = 0; j < size; j++)
            {
                cout << A[i][j] << "\t";
            }
            cout << endl;
        }
    }
    void Transpose()
    {
        cout << "Transpose is: "<< endl;
        for (int i = 0; i < size; i++)
        {
            for (int j = 0; j < size; j++)
            {
                cout << A[j][i] << "\t";
            }
            cout << endl;
        }
    }
    bool isSymmetry()
    {
        for (int i = 0; i < size; i++)
        {
            for (int j = 0; j < size; j++)
            {
                if (A[i][j] == A[j][i])
                {
                    continue;
                }
                else
                    return false;
            }
        }
        return true;
    }
    twoDArray multiply(twoDArray A1, twoDArray A2)
    {
        twoDArray A3;
        A3.Initialize(1);
        for (int i = 0; i < size; i++)
        {
            for (int j = 0; j < size; j++)
            {
                for (int k = 0; k < size; k++)
                {
                    A3.A[i][j] += A1.A[i][k] * A2.A[k][j];
                }
            }
        }
        return A3;
    }
};
int main()
{
    int x;
    twoDArray A1;
    twoDArray A2;
    while (1)
    {
        cout << "1. Transpose." << endl;
        cout << "2. Symmetric." << endl;
        cout << "3. Multiplication." << endl;
        cout << "4. Exit" << endl;
        cout << "Please enter an option: " << endl;
        cin >> x;
        switch (x)
        {
        case 1:
        {
            A1.Initialize();
            A1.Print();
            A1.Transpose();
            break;
        }
        case 2:
        {
            A1.Initialize();
            A1.Print();
            bool sym = A1.isSymmetry();
            if (sym == true)
            {
                cout << "Matrix is Symmetric" << endl;
            }
            else
            {
                cout << "Matrix is Not Symmetric" << endl;
            }
            break;
        }
        case 3:
        {
            A1.Initialize();
            A1.Print();
            A2.Initialize();
            A2.Print();
            twoDArray A3 = A1.multiply(A1, A2);
            A3.Print();
            break;
        }
        case 4:
            break;
        default:
            cout << "Please enter the correct option!!"<<endl;
        }
        if (x==4)
        {
            break;
        }
    }
}
