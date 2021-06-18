/* Author : Chaitaly Kundu
   Date : 14th june 2021 */


// In inverted half pyramid pattern the row and col number should be same. By default it'll take row number

#include<iostream>

using namespace std;

int main(){
    int row, col;
    cout << "Enter the no. of row and column: ";
    cin >> row >> col ;

    for(int i=row;i>=1;i--)
    {
        for(int j=1;j<=i;j++)
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