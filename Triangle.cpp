#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"Enter the angles three sides of triangle: ";
    cin>>a>>b>>c;
    if((a+b+c)==180)
        cout<<"The is a valid triangle"<<endl;
    else
        cout<<"The is not a valid traingle"<<endl;
    return 0;
}