/* Author : Chaitaly Kundu
   Date : 03-09-2021*/

#include<iostream>
using namespace std;


void fibonacci(int n)
{
    int a=0, b=1;
    int c;
    while(n>0)
    {
        cout << b << " ";
        c = a+b;
        a=b;
        b=c;
        n--;
    }
}

int main(){

    int n;
    cin >> n;

    fibonacci(n);
    return 0;
}