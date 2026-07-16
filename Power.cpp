#include <iostream>
#include <cmath>     

using namespace std;

int main()
{
    int base, power;
    int result;

    cout << "Enter the base number: ";
    cin >> base;

    cout << "Enter the power: ";
    cin >> power;

    result = pow(base, power);

    cout << "Ans is = " << result;

    return 0;
}