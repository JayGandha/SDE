#include<iostream>
using namespace std;
int main(){
    string Menu = "1. Burger, 2. Pizza, 3. Sandwich, 4. Soda, 5. Lassi";
    int arr[5] = {100, 250, 120, 20, 70};
    bool more_order = true;
    int bill = 0;
    while(more_order){
        cout<<Menu;
        cout<<"\nEnter your choice (1-5): ";
        int item;
        cin>>item;
        cout<<"Enter quantity: ";
        int quantity;
        cin>>quantity;
        bill = bill + arr[item - 1] * quantity;
        cout<<"Do you want to order more? (1/0): ";
        cin>>more_order;
    }
    cout<<"Your total bill is: "<<bill<<endl;

    return 0;
}