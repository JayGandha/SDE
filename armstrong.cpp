#include<iostream>
using namespace std;

int length(int num){
    int count = 0;
    while(num != 0){
        num = num / 10;
        count++;
    }
    return count;
}

int pow(int a, int b){
    if(b == 0){
        return 1;
    }
    if(b == 1){
        return a;
    }
    return a * pow(a, b - 1);
}

int main(){

    int num;
    cout << "Enter a number: ";
    cin >> num;
for(int num = 0; num <= 1000; num++){
    int power = length(num);
    int sum = 0;
    int temp = num;
    
    while(temp != 0){
        int digit = temp % 10;
        sum += pow(digit, power);
        temp = temp / 10;
    }

    // if(sum == num){
    //     cout << sum << endl;
    // }
    if(sum == num){
        cout << num << " is an Armstrong number." << endl;
    } else {
        cout << num << " is not an Armstrong number." << endl;
    }
}
    return 0;
}
