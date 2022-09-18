#include <iostream>

#define PI 3.14

using namespace std;

void areaOfSphere(int radius){
    double area = 4 * PI * radius * radius;

    cout << "Area of Sphere is: " << area << endl;
};

int main()
{
    double radius;
    cout << "Enter the Radius of Sphere: ";
    cin >> radius;
    areaOfSphere(radius);
    return 0;
}