#include <iostream>
#include <string>
using namespace std;

int main() {
    int age; string state;
    cin >> age >> state;
    if (age < 18 || state != "gujarat") {
        cout << "Not Eligible to vote";
    }
    else {
        cout << "Eligible to vote";
    } 
    return 0;
}
