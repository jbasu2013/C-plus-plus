/* Author : Chaitaly Kundu
   Date : 02-09-2021*/

#include<iostream>
using namespace std;

void rev(string s, int n)
{
    char temp;
    for(int i=0;i<n/2;i++)
    {
        temp = s[i];
        s[i] = s[n-i-1];
        s[n-i-1] = temp;
    }
    cout << s;
}

int main(){

    string s;
    cin >> s;

    int n= s.length();

    rev(s,n);

    return 0;
}