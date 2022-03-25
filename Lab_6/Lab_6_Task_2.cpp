#include <iostream>
using namespace std;
class security
{
    private:
        int id;
        string name;
        string rank;
        static int counter;
    
    public:
        security():id(0),name(""), rank(""){}
        void setValues()
        {
            cout << "Enter the ID of the officer: "<<endl;
            cin >> id;
            cout << "Enter the name of officer: "<<endl;
            cin >> name;
            cout << "Enter the rank of the officer: "<<endl;
            cin >> rank;
            if(checkPalindrome() == 1)
            {
                counter ++;
                cout << "The officer is allowed to enter the restricted area" <<endl;
            }
            else
                cout << "The officer is not allowed to enter the restricted area" <<endl;
            

        }
        int checkPalindrome()
        {
            int temp;
            int digit, rev =0;
            temp = id;
            while(temp != 0)
            {
                digit = temp%10;
                rev = (rev*10) + digit;
                temp /= 10;
            }
            if (id  == rev)
            {
                return 0;
            }
            else return 1;
        }
        void clear(){
            id =0; name ="";
            rank = "";
        }
        static int get_count()
        {
            return counter;
        }

};
int security::counter =0;
int main()
{
    security officer;
    int x =20;
    while(x != 3)
    {
        cout << "Please select the desired option"<<endl;
        cout << "1. Enter id of officer"<<endl;
        cout << "2. Get total number of officers" <<endl;
        cout << "3. Exit"<<endl;
        cin >> x;
        switch(x)
        {
            case 1:
            {
                officer.setValues();
                officer.clear();
                break;
            }
            case 2:
            {
                cout << officer.get_count() <<endl;
                break;
            }
            case 3:
                break;
            default:
                cout << "Enter the correct option"<<endl;
        }
    }
}