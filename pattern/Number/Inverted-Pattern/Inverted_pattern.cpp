/* Author : Chaitaly Kundu
   Date : 18th june 2021 */


#include<iostream>

using namespace std;

int main(){
    int i,j,n;
    cout << "Enter the number of rows: ";
    cin >> n;

    for(int i=1;i<=n;i++)
    {
        int c=1;
        for(int j=1;j<=n-i+1;j++)
        {
            cout << c++ << " ";
        }
        cout << endl;
    }

    return 0;
}

/*  O/P:

Enter the no. of row and column: 5
5

1 2 3 4 5
1 2 3 4
1 2 3
1 2
1

*/