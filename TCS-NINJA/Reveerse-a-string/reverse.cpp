/* Author : Chaitaly Kundu
   Date : 02-09-2021*/

#include<iostream>
using namespace std;

int main(){

    string s;
    cin >> s;

    int n= s.length();
    for(int i=n-1;i>=0;i--)
        cout << s[i];
    return 0;
}