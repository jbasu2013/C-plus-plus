/* Author : Chaitaly Kundu
   Date : 12th june 2021 */

#include<iostream>

using namespace std;

int main()
{
    int n, sum = 0;

    cout << "Enter the number of terms : " ;
    cin >> n;

    while(n>0)
    {
        sum = sum + n;
        n--;
    }
    cout << "Sum is " << sum << endl;
    return 0;
}