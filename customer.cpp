#include<iostream>
using namespace std;
int main() {
    int quantity;
    int credit;
    cout << "Enter the quantity of items customer wants to purchase: ";
    cin >> quantity;
    cout << "Enter the credit of the customer: ";
    cin >> credit;
    //suppose 10 items in stoke
    //credit 1 = ok and 0 = not ok
    if(quantity<=10 && credit==1){
        cout<<"ordered successfully";
    }
    else if(quantity<=10 && credit==0){
        cout<<"your credit is not OK";
    }
    else if(quantity>10 && credit==1){
        cout<<"take 10 and more items will comes in stoke on this date:";
    }
    else{
        cout<<"invalid input";
    }
    return 0;
}
