#include <iostream>

using namespace std;

void volumeOfCuboid(int length, int beradth, int height)
{
    int volume = length * beradth * height;
    cout << "Volume of Cuboid is: " << volume << endl;
};

int main()
{
    int length, breadth, height;
    cout << "Enter the Length of Cuboid: ";
    cin >> length;
    cout << "Enter the Breadth of Cuboid: ";
    cin >> breadth;
    cout << "Enter the Height of Cuboid: ";
    cin >> height;
    volumeOfCuboid(length, breadth, height);

    return 0;
}