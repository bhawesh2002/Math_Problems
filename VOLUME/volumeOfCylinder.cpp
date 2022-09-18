#include <iostream>

#define PI 3.142

using namespace std;

void volumeOfCylinder(double radius, double height)
{
    double volume = PI * radius * radius * height;
    cout << "Volume of Cylinder is: " << volume << endl;
};

int main()
{
    double radius, height;
    cout << "Enter the Radius of the Cylinder: ";
    cin >> radius;
    cout << "Enter the Height of the Cylinder: ";
    cin >> height;
    volumeOfCylinder(radius, height);
    return 0;
}