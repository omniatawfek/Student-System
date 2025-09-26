#include "controller/controller.cpp"
#include <iostream>
using namespace std;

void displaySystem() {
    cout << "Please Enter The Process You Want To Do :" << endl;
    cout << "1 - About Students" << "\t\t" << "2- About courses" << endl;
    cout << "3 - About teachers" << "\t\t" << "4-  Exit" << endl;
}
void showList(string value) {
    cout << "\t\t *************** "<<value<<" Mangament System *************** " << endl;
    cout << "1 - Add "<< value << "\t\t" << "2- Remove "<< value << endl;
    cout << "3 - Edit " << value << "\t\t" << "4- Show " << value << endl;
    cout << "5 - Exit" << endl;
}
int main()
{
    int process;
    int flag = 0;
    cout << "\t\t ***************  Mangament System *************** " << endl;
    while (true) {
        displaySystem();
        cin >> process;
        
        switch (process) {
        case 1:
            showList("student");
            int processStudent;
            cin >> processStudent;
            
            if (processStudent == 1) {
                cout << "Please Enter Student Data :" << endl;
                student student;
                cout << "Enter Student Name :"<<endl;
                string name;
                cin >> name;
                student.setName(name);
                cout << "Enter Student Age :" << endl;
                int age;
                cin >> age;
                student.setAge(age);
                cout << "Enter Student PhoneNumber :" << endl;
                int phoneNumber;
                cin >> phoneNumber;
                student.setphoneNumber(phoneNumber);
                cout << "Enter Student GPA :" << endl;
                double gpa;
                cin >> gpa;
                student.setgpa(gpa);
                StudentController studentController;
                int id = studentController.addStudent(student);
                cout << "ID :  " << id << endl;
            }
            break;
        case 2:
            showList("course");
            break;
        case 3:
            showList("teacher");
            break;
        case 4:
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
