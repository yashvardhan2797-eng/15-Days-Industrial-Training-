#include <iostream>
using namespace std;

class Car
{
public:
    static int count;

    Car()
    {
        count++;
    }
};

int Car::count = 0;

int main()
{
    int n;

    cout << "Enter Number of Cars: ";
    cin >> n;

    for(int i = 0; i < n; i++)
    {
        Car c;
    }

    cout << "Total Cars = " << Car::count;

    return 0;
}