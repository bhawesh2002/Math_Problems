#include <iostream>

using namespace std;

void areaOfRect(int length, int breadth)
{
    int area = length * breadth;
    cout << "Area of Rectangle is : " << area << endl;
};

int main()
{
    int length, breadth;
    cout << "Enter the Length of the Rectangle: ";
    cin >> length;
    cout << "Enter the Breadth of the Rectangle: ";
    cin >> breadth;
    areaOfRect(length, breadth);
    return 0;
}