#include <iostream>

using namespace std;

void areaOfPallelogram(int base, int height)
{
    int area = base * height;
    cout << "Area of Pallelogram is: " << area << endl;
};

int main()
{
    int base, height;
    cout << "Entre the Base of Pallelogram: ";
    cin >> base;
    cout << "Enter the Height of the Pallelogram: ";
    cin >> height;
    areaOfPallelogram(base, height);
    return 0;
}