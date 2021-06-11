/* Author : Chaitaly Kundu
   Date : 12th june 2021 */

#include<iostream>

using namespace std;

int main()
{
    int n, sum;

    cout << "Enter the number of terms : " ;
    cin >> n;

    sum = n * (n+1) / 2;
    cout << "Sum is " << sum << endl;
    return 0;
}