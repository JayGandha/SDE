// find the youngest member
#include<iostream>
using namespace std;
int main(){
    int ram,shyam,ajay;
    cin>>ram>>shyam>>ajay;
    if(ram<shyam && ram<ajay){
        cout<<"youngest is ram: "<<ram;
    }
    else if(shyam<ram && shyam<ajay){
        cout<<"youngest is shyam: "<<shyam;
    }
    else{
        cout<<"youngest is ajay: "<<ajay;
    }
}

    