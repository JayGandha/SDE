#include <iostream>
using namespace std;

int main() {

    int n, m;
    cin >> n >> m;

    // code here
    for (int i = 1; i <= n; i++) {
        // Print leading spaces
        for (int j = 1; j <= n - i; j++) {
            cout << " ";
        }
        // Print stars
        for (int j = 1; j <= m; j++) {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}