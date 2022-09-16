#include <iostream>
#define PI 3.14 // predefine the value of PI
using namespace std;

void areaOfCircle(int radius)
{
    int area = PI * radius * radius;
    cout << "Area of Circle is: " << area << endl;
};

int main()
{
    int radius;
    cout << "Enter the Radius of the Circle: ";
    cin >> radius;
    areaOfCircle(radius);
    return 0;
}