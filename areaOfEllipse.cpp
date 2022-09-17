#include <iostream>

#define PI 3.14

using namespace std;

void areaOfEllipse(int major, int minor)
{
    int area = PI * major * minor;
    cout << "The area of Ellipse is: " << area << endl;
};

int main()
{
    int major, minor;
    cout << "Enter the length of Major Axis: ";
    cin >> major;
    cout << "Enter the length of Minor Axis: ";
    cin >> minor;
    areaOfEllipse(major, minor);
    return 0;
}