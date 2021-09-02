/* Author : Chaitaly Kundu
   Date : 02-09-2021*/

// when numbers are unique

#include<iostream>
using namespace std;

int sec_largest(int a, int b, int c)
{
    if(a>b && a>c)
    {
        if(b>c)
            return b;
        else
            return c;
    }
    else if(b>c)
    {
        if(a>c)
            return a;
        else
            return c;
    }
    else
    {
        if(a>b)
            return a;
        else
            return b;
    }
}

int main(){

    int a,b,c;
    cin >> a >> b >> c;

    int second_largest = sec_largest(a,b,c);
    cout << second_largest << endl;
    return 0;
}