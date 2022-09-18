#include <iostream>

#define PI 3.142

using namespace std;

void volumeOfEllipsoid(double a, double b, double c)
{
    double volume = (4 * PI * a * b * c) / 3;
    cout << "Volume of Ellipsoid is: " << double(volume) << endl;
};

int main()
{
    double a, b, c;
    cout << "Enter the value of \'a\': ";
    cin >> a;
    cout << "Enter the value  of \'b\': ";
    cin >> b;
    cout << "Enter the value of \'c\': ";
    cin >> c;
    volumeOfEllipsoid(a, b, c);
    return 0;
}