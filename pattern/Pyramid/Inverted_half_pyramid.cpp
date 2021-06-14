/* Author : Chaitaly Kundu
   Date : 14th june 2021 */


// In inverted half pyramid pattern the row and col number should be same. By default it'll take row number

#include<iostream>

using namespace std;

int main(){
    int row, col;
    cout << "Enter the no. of row and column: ";
    cin >> row >> col ;

    for(int i=1;i<=row;i++)
    {
        for(int j=row+1-i;j>=1;j--)
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