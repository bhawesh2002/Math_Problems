#include <iostream>

using namespace std;

void volumeOfCube(double side)
{
    int volume = side * side * side;
    cout << "Volume of Cube is: " << volume << endl;
};

int main()
{
    double side;
    cout << "Enter the Side of Cube: ";
    cin >> side;
    volumeOfCube(side);
    return 0;
}