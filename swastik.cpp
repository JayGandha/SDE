//code for swastik
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            bool axis = (i == n / 2 || j == n / 2);
            bool one = (i < n / 2 && j == 0);
            bool two = (i == 0 && j > n / 2);
            bool three = (i == n - 1 && j < n / 2);
            bool four = (i > n / 2 && j == n - 1);

            if (axis || one || two || three || four) {
                cout << "* ";
            } else {
                cout << "  ";
            }
        }
        cout << endl;
    }

    return 0;
}