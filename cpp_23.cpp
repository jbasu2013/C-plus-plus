/* Author : Chaitaly Kundu
   Date : 14th june 2021 */

// Prime number

#include<iostream>

using namespace std;


string PrimeOrNot(int n)
{
    for(int i=2;i<n;i++)
    {
        if(n%i==0)
        {
            return  "Not Prime" ;
            break;
        }
    }
    return "Prime number" ;
}

int main()
{
    int n;
    cout << "Enter a number : ";
    cin >> n;

    cout << PrimeOrNot(n) << endl;
    return 0;
}