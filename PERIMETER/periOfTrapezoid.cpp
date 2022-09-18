#include <iostream>

using namespace std;

void periOfTrapezoid(int base1, int base2, int height)
{
    int perimeter = base1 + base2 + 2 * height;
    cout << "Perimeter of Trapezoid is: " << perimeter << endl;
};

int main()
{
    int base1, base2, height;
    cout << "Enter the Base1 of Trapozoid: ";
    cin >> base1;
    cout << "Enter the Base2 of Trapezoid: ";
    cin >> base2;
    cout << "Enter the Height of Trapezoid: ";
    cin >> height;
    periOfTrapezoid(base1, base2, height);
    return 0;
}