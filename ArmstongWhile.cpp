#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int num = 1;

    while (num <= 500)
    {
        int temp = num;
        int digits = 0;
        int sum = 0;

        while (temp > 0)
        {
            digits++;
            temp = temp / 10;
        }

        temp = num;

        while (temp > 0)
        {
            int digit = temp % 10;
            sum = sum + pow(digit, digits);
            temp = temp / 10;
        }

        if (sum == num)
        {
            cout << num << " ";
        }

        num++;
    }

    return 0;
}