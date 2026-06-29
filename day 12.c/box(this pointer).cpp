#include <iostream>
using namespace std;

class Box
{
    int length;

public:
    void setLength(int length)
    {
        this->length = length;
    }

    void display()
    {
        cout << "Length = " << length;
    }
};

int main()
{
    Box b;
    int len;

    cout << "Enter Length: ";
    cin >> len;

    b.setLength(len);

    b.display();

    return 0;
}