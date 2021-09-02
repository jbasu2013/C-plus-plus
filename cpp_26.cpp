/* Author : Chaitaly Kundu
   Date : 03-07-2021*/


// Default argument

#include<iostream>
using namespace std;

int product(int a, int b=5){
    return a*b;
}


int main(){

    int a = 5;
    cout << "If a is equal to " << a << " the product is " << product(a) << endl;
    cout << "For VIP: If a is equal to " << a << " the product is " << product(a,6) << endl;

    return 0;
}