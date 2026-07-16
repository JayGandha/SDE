#include <iostream>
using namespace std;
int main()
{
    int i = 1;
    int hours;
    float overtimePay;
    while (i <= 10)
    {
        cout << "Enter working hours of Employee " << i << ": ";
        cin >> hours;
        if (hours > 40)
        {
            overtimePay = (hours - 40) * 12.0;
        }
        else
        {
            overtimePay = 0;
        }
        cout << "Overtime Pay = Rs. " << overtimePay << endl;
        cout << endl;
        i++;
    }
    return 0;
}