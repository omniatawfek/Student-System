
#include <iostream>
using namespace std;
int main()
{
    int process;
    int flag = 0;
    cout << "\t\t *************** Student Mangament System *************** " << endl;
    while (true) {
        cout << "Please Enter The Process You Want To Do :" << endl;
        cout << "1 - Add Student" << "\t\t" << "2- Remove Student" << endl;
        cout << "3 - Edit Student" << "\t\t" << "4- Show Student" << endl;
        cout << "5 - Exit" << endl;
        cin >> process;
        switch (process) {
        case 1:
            cout << "add";
            break;
        case 2:
            cout << "remove";
            break;
        case 3:
            cout << "edit";
            break;
        case 4:
            cout << "show";
            break;
        case 5:
            cout << "exit";
            flag = 1;
            break;
        default :
            cout << "Invalid Value";
        }
        if (flag)
        {
            break;
        }
    }
}
