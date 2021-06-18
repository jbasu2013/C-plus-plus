/* Author : Chaitaly Kundu
   Date : 14th june 2021 */


#include<iostream>

using namespace std;

int main(){
    int n;
    cout << "Enter the no. of row and column: ";
    cin >> n ;  // n = row = col
    for(int i=1;i<=n;i++)
{
    for(int j=1;j<=i;j++)
    {
        cout << i << " ";
    }
    cout << endl ;
}
    return 0;
}

/*  O/P:

Enter the no. of row and column: 6
1
2 2
3 3 3
4 4 4 4
5 5 5 5 5
6 6 6 6 6 6


*/