#include<iostream>
using namespace std;
int main(){
    int a = 10, b = 20;
    int *ptr_a = &a; // pointer variable that stores the address of a
    int *ptr_b = &b; // pointer variable that stores the address of b
    cout <<ptr_a<<"\n"; // prints the address of a
    cout <<ptr_b<<"\n"; // prints the address of b
}
// & = address of
// * = dereferecing operator