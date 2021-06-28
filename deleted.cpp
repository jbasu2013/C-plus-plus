#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        char s;
        cin >> s;

        int n= s.length();
        if(s[0]== "<" && s[1]== "/" && s[n-1]== ">")
            cout << "Success" << endl;
        else
            cout << "Error" << endl;
    }
}