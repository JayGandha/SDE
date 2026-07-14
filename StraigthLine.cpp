#include<iostream>
using namespace std;
int main(){
    int x1,y1,x2,y2,x3,y3;
    cout<<"Enter the first point (x1,y1): ";
    cin>>x1>>y1;
    cout<<"Enter the second point (x2,y2): ";
    cin>>x2>>y2;
    cout<<"Enter the third point (x3,y3): ";
    cin>>x3>>y3;
    if((x1*(y2-y3) + x2*(y3-y1) + x3*(y1-y2)) == 0)
        cout<<"The points are collinear"<<endl;
    else
        cout<<"The points are not collinear"<<endl;
    return 0;
}