/* Author : Chaitaly Kundu
   Date : 18th june 2021 */


#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int a=0,b=1,c,n;

    cout << "Enter the term no. upto which we have to print: " ;
    cin >> n;

    for(int i=1;i<=n;i++)
    {
        cout << b << ' ';
        c=a+b;
        a=b;
        b=c;
    }
    return 0;
}