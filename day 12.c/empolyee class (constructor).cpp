#include <iostream>
using namespace std;

class Employee
{
    string name;
    int id;

public:
    Employee(string n, int i)
    {
        name = n;
        id = i;
    }

    void display()
    {
        cout << "\nEmployee Details\n";
        cout << "Name: " << name << endl;
        cout << "ID: " << id << endl;
    }
};

int main()
{
    string name;
    int id;

    cout << "Enter Employee Name: ";
    cin >> name;

    cout << "Enter Employee ID: ";
    cin >> id;

    Employee e(name, id);

    e.display();

    return 0;
}