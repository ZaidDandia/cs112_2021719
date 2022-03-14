#include <iostream>
#include <string>
using namespace std;

class stringType
{
private:
    string string1, string2;

public:
    stringType() : string1("\0"), string2("\0"){};
    stringType(string str1, string str2)
    {
        string1 = str1;
        string2 = str2;
    }
    ~stringType(){};
    void setValues(string str1, string str2)
    {
        string1 = str1;
        string2 = str2;
    }
    void printValues()
    {
        cout << "The first string is: " << string1 << endl;
        cout << "The second string is: " << string2 << endl;
    }
    int maxLength()
    {
        int i = 0, j = 0, length = 0;
        while (string1[i] != '\0' || string2[j] != '\0')
        {
            if (string1[i] != '\0')
            {
                i++;
            }
            if (string2[j] != '\0')
            {
                j++;
            }
        }
        j < i ? length = i : length = j;
        return length;
    }
    int compare(string s1, string s2)
    {
        int i = 0;
        while (s2[i] != '\0')
        {
            if (s1[i] < s2[i])
            {
                return -1;
            }
            else if (s1[i] > s2[i])
            {
                return 1;
            }
            i++;
        }
        return 0;
    }
    void copy(string source, string destination)
    {
        int i = 0;
        while (source[i] != '\0')
        {
            destination[i] = source[i];
            i++;
        }
        destination[i] = '\0';
        cout << "the copied string is: " << destination;
    }
    string concatenate(string s1, string s2)
    {
        string s3 = s1 + s2;
        return s3;
    }
    int searchWord(string word)
    {
        int i = 0, j = 0;
        while (string1[i] != '\0' || string2[i] != '\0')
        {
            if (string1[i] == ' ' || string1[i] == ',' || string1[i] == '@' || string1[i] == '!')
            {
                string temp;
                for (int j = 0; j < i; j++)
                {
                    temp += string1[j];
                }
                if (temp == word)
                {
                    return 1;
                }
            }
            else if (string2[i] == ' ' || string2[i] == ',' || string2[i] == '@' || string2[i] == '!')
            {
                string temp;
                for (int j = 0; j < i; j++)
                {
                    temp += string2[j];
                }
                if (temp == word)
                {
                    return 1;
                }
            }
            i++;
        }
        return 0;
    }
    int searchChar(char ch)
    {
        int i = 0;
        while (string1[i] != '\0' || string2[i] != '\0')
        {
            if (string1[i] == ch || string2[i] == ch)
            {
                return 1;
            }
            i++;
        }
        return 0;
    }
};

int main()
{
    stringType s;
    int x = 20;
    string s1, s2, s3, word;
    char ch;
    while (x != 0)
    {
        cout << "Please enter your choice: " << endl;
        cout << "1. to set values. " << endl;
        cout << "2. to print values." << endl;
        cout << "3. to get max length." << endl;
        cout << "4. to compare." << endl;
        cout << "5. to copy." << endl;
        cout << "6. to concatenate." << endl;
        cout << "7. to search Word." << endl;
        cout << "8. to search character." << endl;
        cout << "0. to exit." << endl;
        cin >> x;
        switch (x)
        {
        case 1:

            cout << "enter string 1: " << endl;
            cin.ignore();
            getline(cin, s1);
            cout << "enter string 2: " << endl;
            getline(cin, s2);
            s.setValues(s1, s2);
            break;
        case 2:
            s.printValues();
            cout << endl;
            break;
        case 3:
            cout << "Max Length is: " << s.maxLength() << endl;
            break;
        case 4:
            cout << s.compare(s1, s2) << endl;
            break;
        case 5:
            s.copy(s1, s2);
            break;
        case 6:
            s3 = s.concatenate(s1, s2);
            cout << s3 << endl;
            break;
        case 7:
            cin >> word;
            cout << s.searchWord(word) << endl;
            break;
        case 8:
            cin >> ch;
            cout << s.searchChar(ch) << endl;
            break;
        case 0:
            break;
        default:
            cout << "Incorrect value entered please try again!" << endl;
        }
    }
}