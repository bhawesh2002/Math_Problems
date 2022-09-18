#include <iostream>
#include <cmath>

#define PI 3.142

using namespace std;

void areaOfCone(int radius, int height)
{
    double r_plus_h = (radius * radius) + (height * height);
    double area = (PI * radius) * (radius + sqrt(r_plus_h));
    cout << "Area of Cone is: " << double(area) << endl;
};

int main()
{
    double radius, height;
    cout << "Enter the Radius of the Cone: ";
    cin >> radius;
    cout << "Enter the Height of the Cone: ";
    cin >> height;
    areaOfCone(radius, height);
    return 0;
}