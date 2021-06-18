/* Author : Chaitaly Kundu
   Date : 18th june 2021 */


#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int a,b;
    cout << "Enter two numbers : ";
    cin >> a >> b;


    for(int i=a;i<=b;i++)
    {
        int c=0;
        for(int j=2;j<=sqrt(b);j++)
        {
            if(i%j==0)
            {
                c++;
                continue;
            }
        }
        if(c==0)
            cout << i << " ";
    }
    return 0;
}
