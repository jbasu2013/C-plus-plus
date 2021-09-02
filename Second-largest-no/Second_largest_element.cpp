/* Author : Chaitaly Kundu
   Date : 02-09-2021*/


#include<iostream>
using namespace std;

int sec_largest(int a, int b, int c)
{
    if((a>=b && a<=c) || (a<=b && a>=c))
        return a;
    else if ((b>=a && b<=c) || (b<=a & b>=c))
        return b;
    else
        return c;
}

int main(){

    int a,b,c;
    cin >> a >> b >> c;

    int second_largest = sec_largest(a,b,c);
    cout << second_largest << endl;
    return 0;
}