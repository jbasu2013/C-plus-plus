/* Author : Chaitaly Kundu
   Date : 12th june 2021 */

#include<iostream>

using namespace std;

int main()
{

    int i;
    while(i<=10)
    {
        static int n = 1;
        n=n+1;
        cout << n <<endl;
    }
    return 0;
}