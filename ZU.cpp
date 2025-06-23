/*
Eugene Githinji
BSE-01-0056/2025
ZU-CAMP
*/
#include <iostream>
using namespace std;

// Definition of zu_cmp class
class zu_cmp {
    // You can define any necessary members or leave it empty for this question.
};

// Definition of employee class
class employee {
private:
    zu_cmp company;  // instantiating zu_cmp object
    string idno;
    string name;
    string occupation;

public:
    void getDetails() {
        cout << "Enter ID Number: ";
        cin >> idno;
        cout << "Enter Name: ";
        cin.ignore(); // To consume newline left by previous cin
        getline(cin, name);
        cout << "Enter Occupation: ";
        getline(cin, occupation);
    }

    void display() {
        cout << "\nEmployee Details:" << endl;
        cout << "ID Number: " << idno << endl;
        cout << "Name: " << name << endl;
        cout << "Occupation: " << occupation << endl;
    }
};

// Main function
int main() {
    employee emp;
    emp.getDetails();
    emp.display();
    return 0;
}
