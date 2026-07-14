#include<iostream>
using namespace std;
int main(){
    int d,m,y;
    cout<<"Enter the date (dd mm yyyy): ";
    cin>>d>>m>>y;
    int totalDays = 0;
    for(int i=1;i<y;i++){
        if((i%400==0)||(i%4==0 && i%100!=0))
            totalDays++;
    }
    int total = (y-1) + totalDays;
    int days = total%7;
    int oddDaysInMonth[] = {3,0,3,2,3,2,3,3,2,3,2,3};
    if((y%400==0)||(y%4==0 && y%100!=0))
        oddDaysInMonth[1] = 1;
    for(int i=0;i<m-1;i++){
        days += oddDaysInMonth[i];
    }
    days += d;
    days %= 7;
    cout<<"Day on "<<d<<"/"<<m<<"/"<<y<<" is "<<days<<endl;
    return 0;
}