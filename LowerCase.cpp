#include<iostream>
using namespace std;
int main() {
    char c;
    cout<<"Enter the character:";
    cin>>c;
    (c>='a' && c<='z')?cout<<"The character is a lowercase letter":cout<<"The character is not a lowercase letter";
    return 0;
}