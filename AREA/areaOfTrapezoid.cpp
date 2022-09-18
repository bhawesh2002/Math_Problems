#include <iostream>

using namespace std;

void areaOfTrapezoid(int base1, int base2, int height)
{
    int area = ((base1 + base2) / 2) * height;
    cout << "Area of Trapezoid is: " << area << endl;
};

int main()
{
    int base1, base2, height;
    cout << "Enter the Base1 of the Trapezoid: ";
    cin >> base1;
    cout << "Enter the Base2 of the Trapezoid: ";
    cin >> base2;
    cout << "Enter the Height of the Trapezoid: ";
    cin >> height;
    areaOfTrapezoid(base1, base2, height);
    return 0;
}