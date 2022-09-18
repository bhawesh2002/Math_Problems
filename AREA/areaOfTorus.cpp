#include <iostream>

#define PI 3.142

using namespace std;

void areaOfTorus(double outer_radius, double inner_radius)
{
    double area = (2 * PI * outer_radius) * (2 * PI * inner_radius);
    cout << "Area of Torus is: " << area << endl;
}

int main()
{
    double outer_radius, inner_radius;
    cout << "Enter the Outer Radius of Torus: ";
    cin >> outer_radius;
    cout << "Enter the Inner Radius of Torus: ";
    cin >> inner_radius;
    areaOfTorus(outer_radius, inner_radius);
    return 0;
}