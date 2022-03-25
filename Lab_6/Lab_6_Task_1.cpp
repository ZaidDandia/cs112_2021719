#include <iostream>
#include <string>
using namespace std;
class Coordinator;
class Person
{
private:
    friend class Coordinator;
    string competition;
    string university;

public:
};

class Coordinator
{

private:
    friend class Person;
    Person p_1, p_2;

public:
    void setValue()
    {
        string result;
        cout << "Enter the competition and University name: ";
        getline(cin, result);
        int i = 0;

        while (result[i] != ' ')
        {
            p_1.competition += result[i];
            i++;
        }
        i++;
        while (result[i] != '\0')
        {
            p_1.university += result[i];
            i++;
        }
        cout << "Enter the competition and University name: ";
        getline(cin, result);
        i = 0;

        while (result[i] != ' ')
        {
            p_2.competition += result[i];
            i++;
        }
        i++;
        while (result[i] != '\0')
        {
            p_2.university += result[i];
            i++;
        }
    }
    void allotRoom()
    {
        if (p_1.university == p_2.university)
        {
            int i = 0, j = 0;
            while (p_1.competition[i] != '\0')
            {
                i++;
            }
            while (p_2.competition[j] != '\0')
            {
                j++;
            }
            if (i >= j)
            {
                cout << "Message from the coordinator: Person1 and Person2 are roommates, and the room number is " << i << endl;
            }
            else
                cout << "Message from the coordinator: Person1 and Person2 are roommates, and the room number is " << j << endl;
        }
        else
        {
            cout << "Message from the coordinator: Person1 and Person2 are not roommates" << endl;
        }
    }
};

int main()
{
    Coordinator coord;
    coord.setValue();
    coord.allotRoom();
}