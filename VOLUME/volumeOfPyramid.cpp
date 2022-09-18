#include <iostream>

using namespace std;

void volumeOfPyramid(double length, double width, double height)
{
    double volume = (length * width * height) / 3;
    cout << "The volume of Pyramid is: " << volume << endl;
};

int main()
{
    double length, width, height;
    cout << "Enter the Length of Pyramid: ";
    cin >> length;
    cout << "Enter the Width of Pyramid: ";
    cin >> width;
    cout << "Enter the Height of Pyramid: ";
    cin >> height;
    volumeOfPyramid(length, width, height);
    return 0;
}