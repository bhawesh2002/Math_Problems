#include <iostream>

using namespace std;

void volumeOfCone(double radius, double height)
{
    double volume = (3.142 * radius * radius * height) / 3;
    cout << "Volume of Cone is: " << volume << endl;
};

int main()
{
    double radius, height;
    cout << "Enter the Radius of Cone: ";
    cin >> radius;
    cout << "Enter the Height of Cone: ";
    cin >> height;
    volumeOfCone(radius, height);
    return 0;
}