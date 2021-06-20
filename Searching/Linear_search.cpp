/* Author : Chaitaly Kundu
   Date : 18th june 2021 */


#include<iostream>
using namespace std;

int LinearSearch(int arr[], int n, int x)
{
    for(int i=0;i<n;i++)
    {
        if(arr[i]==x)
            return i;
    }
    return -1;
}

int main(){
    int n, x;

    cout << "Enter the number of elements : ";
    cin >> n;


    int arr[n];
    cout << "Array elements are : ";
    for(int i=0;i<n;i++)
        cin >> arr[i];

    cout << "Element to be searched is : ";
    cin >> x;

    int res;
    res = LinearSearch(arr,n,x);
    cout << res << endl;

}