/* Author : Chaitaly Kundu
   Date : 03-07-2021*/


// Using pointer

#include<iostream>
using namespace std;

void SwapPointer(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main(){

    int x=4, y=5;

    SwapPointer(&x, &y);
    cout << "Value of x is " << x << endl;
    cout << "Value of y is " << y << endl;

    return 0;
}