/* Author : Chaitaly Kundu
   Date : 02-09-2021*/

#include<iostream>
using namespace std;

int prime(int n)
{
    for(int i=2;i<n;i++)
    {
        if(n%i==0)
        {
            return 0;
            break;
        }
    }
    return 1;
}

int main(){

    int n;
    cin >> n;

    if(prime(n))
        cout << "Prime";
    else
        cout << "Not Prime";

    return 0;
}