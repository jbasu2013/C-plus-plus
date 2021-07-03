/* Author : Chaitaly Kundu
   Date : 03-07-2021*/

// Reference Variable
#include<iostream>
using namespace std;

int & SwapReferenceVar(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
    return a;
}


int main(){

    int x=4, y=5;

    SwapReferenceVar(x, y);
    cout << "Value of x is " << x << endl;
    cout << "Value of y is " << y << endl;

    return 0;
}