#include<iostream>
using namespace std;
int main(){
    int num1, num2, num3;
    cout<<"Enter three nummbers:";
    cin>>num1>>num2>>num3;
    (num1>num2 && num1>num3)?cout<<"num1 is greater":(num2>num3 && num2>num1)?cout<<"num2 is greater":cout<<"num3 is greater";
    return 0;
}