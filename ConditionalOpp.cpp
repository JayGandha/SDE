//a
// #include<iostream>
// using namespace std;
// int main() {
//     int x, min, max;
//     cin>>max>>x;
//     (x>max)?max=x:x=min;
//     return 0; 
// }

//b
// #include<iostream>
// using namespace std;
// int main() {
//     int code;
//     cin>>code;
//     (code>1)?cout<<"Jerusalem":(code<1)?cout<<"Eddie":cout<<"C Brain";
//     return 0;
// }

//c
#include<iostream>
using namespace std;
int main() {
    float sal;
    cout<<"Enter the salary:";
    cin>>sal;
    (sal<40000 && sal>25000)?cout<<"Manager":(sal<25000 && sal>15000)?cout<<"Accountant":cout<<"Clerk";
    return 0;
}
