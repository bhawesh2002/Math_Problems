#include <iostream>

using namespace std;

void areaOFCube(int side)
{
    int area = 6 * side * side;
    cout << "Area of Cube is: " << area << endl;
}

int main()
{
    int side;
    cout << "Enter the side of the Cube: ";
    cin >> side;
    areaOFCube(side);
    return 0;
}