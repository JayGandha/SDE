#include<iostream>
using namespace std;
int main(){
    int l,b;
    cout<<"Enter the length and breadth of rectangle: ";
    cin>>l>>b;
    int area=l*b;
    cout<<"The area of rectangle is: "<<area<<endl;
    int perimeter=2*(l+b);
    cout<<"The perimeter of rectangle is: "<<perimeter<<endl;
    if(area>perimeter)
        cout<<"The area is greater than perimeter"<<endl;
    else
        cout<<"The area is less than perimeter"<<endl;
    return 0;
}