#include<iostream>
using namespace std;
int main(){
    int x,y;
    cout<<"Enter the coordinates of a point (x,y): ";
    cin>>x>>y;
    if(y==0 && x!=0){
        cout<<"point is on x axis";
    }
    else if(x==0 && y!=0){
        cout<<"point is on y axis";
    }
    else{
        cout<<"point is on (0,0)";
    }
}