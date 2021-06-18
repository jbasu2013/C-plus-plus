/* Author : Chaitaly Kundu
   Date : 14th june 2021 */


// In inverted half pyramid pattern the row and col number should be same. By default it'll take row number

#include<iostream>

using namespace std;

int main(){
    int n;
    cout << "Enter the no. of row and column: ";
    cin >> n ;

    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n-i+1;j++)
        {
            cout << "* ";
        }
        cout << endl ;
    }
    return 0;
}

/*  O/P:

Enter the no. of row and column: 5
5
* * * * *
* * * *
* * *
* *
*

*/