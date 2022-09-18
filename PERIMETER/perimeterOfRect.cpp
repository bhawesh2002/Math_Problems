#include <iostream>
using namespace std;

void periOfRect(int length, int breadth)
{
    int periemter = 2 * (length + breadth);
    cout << "Perimeter of Rectangle is: " << periemter << endl;
};
int main()
{
    int length, breadth;
    cout << "Enter Length of the Rectangle: ";
    cin >> length;
    cout << "Enter Breadth of the Rectangle: ";
    cin >> breadth;
    periOfRect(length, breadth);
    return 0;
}