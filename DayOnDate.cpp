//Day on 1 Jan
#include <iostream>
using namespace std;
int main() {
    int year;
    cout << "Enter a year: ";
    cin >> year;

    int totalDays = 0;

    for (int i = 1; i < year; i++) {
        if ((i % 400 == 0) || (i % 4 == 0 && i % 100 != 0))
           totalDays++;
    };
    int total = year + totalDays;
    int days = total%7;
    cout<<"Day on 1 Jan of year "<<year <<" is "<<days<<endl;

    return 0;
}