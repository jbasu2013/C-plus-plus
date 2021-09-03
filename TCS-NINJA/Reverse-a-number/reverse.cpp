/* Author : Chaitaly Kundu
   Date : 02-09-2021*/

#include<iostream>
using namespace std;

int rev(int n)
{
    int reverse=0;
    while(n>0)
    {
        int d = n%10;
        reverse =reverse*10 + d;
        n/=10;
    }
    return reverse;
}

int main(){

    int n;
    cin >> n;

    cout << rev(n);

    return 0;
}