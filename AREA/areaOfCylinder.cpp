#include <iostream>

#define PI 3.14

using namespace std;

void areaOfCylinder(int radius, int height)
{
    int area = (2 * PI * radius * height) + (2 * PI * radius * radius);
    cout << "Area of Cylinder is: " << area << endl;
}

int main()
{
    int radius, height;
    cout << "Enter the Radius of the Cylinder: ";
    cin >> radius;
    cout << "Enter the Height of the Cylinder: ";
    cin >> height;
    areaOfCylinder(radius, height);
    return 0;
}