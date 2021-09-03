/* Author : Chaitaly Kundu
   Date : 02-09-2021*/

#include<iostream>
using namespace std;

int palindrome(string s, int n)
{
    char temp;
    for(int i=0;i<n/2;i++)
    {
        if(s[i]!=s[n-i-1])
        {
            return 0;
            break;
        }
    }
    return 1;
}

int main(){
    string s;
    cin >> s;
    int n= s.length();

    if(palindrome(s,n))
        cout << "Palindrome";
    else
        cout << "Not Palindrome";
    return 0;

}