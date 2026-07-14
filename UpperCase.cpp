#include<iostream>
using namespace std;
int main() {
    char c;
    cout<<"Enter the character:";
    cin>>c;
    (c>='A' && c<='Z')?cout<<"The character is an uppercase Letter":cout<<"The character is not an uppercase letter";
    return 0;
}