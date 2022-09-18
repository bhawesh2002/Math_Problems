#include <iostream>

using namespace std;

void areaOfSq(int side){
    int  area = side * side;
    cout << "Area of Square is: " << area << endl;
};

int main()
{
    int side;
    cout << "Enter the Side of the Square: ";
    cin >> side;
    areaOfSq(side);
    return 0;
}