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
        for(int j=1;j<=i;j++)
        {
            if((i+j)%2==0)
                cout  << "1 ";
            else
                cout  << "0 ";
        }
        cout << endl;
    }

    return 0;
}

/*  O/P:

Enter the number of rows: 5

1
0 1
1 0 1
0 1 0 1
1 0 1 0 1

*/