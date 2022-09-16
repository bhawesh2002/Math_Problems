#include <iostream>

using namespace std;

void periOfCircle(int radius)
{
    int perimeter = 2 * 3.14 * radius;
    cout << "Perimeter of Circle is: " << perimeter << endl;
};

int main(){
    int radius;
    cout << "Enter the Radius of Circle: ";
    cin >> radius;
    periOfCircle(radius);
    return 0;
}