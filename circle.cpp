#include<iostream>
using namespace std;
int sqrt(){
    int x, y, r, d;
    cout<<"Enter the coordinates of a point (x,y): ";
    cin>>x>>y;
    cout<<"Enter the radius of the circle: ";
    cin>>r;
    d = x*x + y*y;
    if(d < r*r){
        cout<<"point is inside the circle";
    }
    else if(d > r*r){
        cout<<"point is outside the circle";
    }
    else{
        cout<<"point is on the circle";
    }
}
int main(){
    sqrt();
    return 0;
}