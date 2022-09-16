#include <iostream>

using namespace std;

void areaOfTriangle(int base, int height)
{
    int area = (base * height) / 2;
    cout << "Area of Triangle is: " << area << endl;
};

int main()
{
    int base, height;
    cout << "Enter the base  of the Triangle: ";
    cin >> base;
    cout << "Enter the Height of the Triangle: ";
    cin >> height;
    areaOfTriangle(base, height);
    return 0;
}