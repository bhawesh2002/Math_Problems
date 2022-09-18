#include <iostream>

using namespace std;

void perimeterOfSq(int side)
{
    int perimeter = 4 * side;
    cout << "Perimeter of Square is: " << perimeter << endl;
}

int main()
{
    int side;
    cout << "Enter the side of Square: ";
    cin >> side;
    perimeterOfSq(side);
    return 0;
};