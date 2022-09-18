#include <iostream>

#define PI 3.142

using namespace std;

void volumeOfSphere(double radius)
{
    double volume = (4 * PI * (radius * radius * radius)) / 3;
    cout << "Volume of Sphere is: " << volume << endl;
};

int main()
{
    double radius;
    cout << "Enter the Radius of Sphere: ";
    cin >> radius;
    volumeOfSphere(radius);
    return 0;
}
