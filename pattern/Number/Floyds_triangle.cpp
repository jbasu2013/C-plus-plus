/* Author : Chaitaly Kundu
   Date : 14th june 2021 */


#include<iostream>

using namespace std;

int main(){
    int n, c=1;
    cout << "Enter the no. of row and column: ";

    cin >> n ;  // n = row = col

    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            cout << c++ << " ";
        }
        cout << endl ;
    }
    return 0;
}

/*  O/P:

Enter the no. of row and column: 5
1
2 3
4 5 6
7 8 9 10
11 12 13 14 15


*/