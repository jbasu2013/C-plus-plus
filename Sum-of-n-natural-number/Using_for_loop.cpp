/* Author : Chaitaly Kundu
   Date : 12th june, 2021 */

#include<iostream>

using namespace std;

int main()
{
    int n, sum =0, i;

    cout << "Enter the number of terms : " ;
    cin >> n;

    for(i=1;i<=n;i++)
    {
        sum = sum + i;
    }
    cout << "Sum is " << sum << endl;
    return 0;
}