// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;
//     bool isPrime = true;
//     if (n <= 1)
//     {
//         isPrime = false;
//     }
//     else
//     {
//         for (int i = 2; i < n; i++)
//         {
//             if (n % i == 0)
//             {
//                 isPrime = false;
//                 break;
//             }
//         }
//     }
//     if (isPrime)
//     {
//         cout << "Prime Number";
//     }
//     else
//     {
//         cout << "Not Prime Number";
//     }
//     return 0;
// }

#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    if (n <= 1) {
        cout << "Not Prime";
        return 0;
    }
    if (n == 2) {  
        cout << "Prime";
        return 0;
    }
    for (int i = 3; i * i < n; i+=2) {
        if (n % i == 0) {
            cout << "Not Prime";
            return 0;
        }
    }
    cout << "Prime";
    return 0;
}