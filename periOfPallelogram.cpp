#include <iostream>

using namespace std;

void periOfPallelogram(int base, int height)
{
    int perimeter = 2 * (base + height);
    cout << "Perimeter of Pallelogram is: " << perimeter << endl;
};

int main()
{
    int base, height;
    cout << "Enter Base of the Pallelogram: ";
    cin >> base;
    cout << "Enter the Height of the Pallelogram:";
    cin >> height;
    periOfPallelogram(base, height);
    return 0;
}