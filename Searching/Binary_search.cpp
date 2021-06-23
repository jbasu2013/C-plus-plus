/* Author : Chaitaly Kundu
   Date : 18th june 2021 */


#include<iostream>
using namespace std;

int BinarySearch(int arr[], int n, int x)
{
    int l=0, r=n-1,mid;
    while(l<=r)
    {
        mid = (l+r)/2;
        if(x==arr[mid])
            return mid;
        if(x < arr[mid])
            r = mid-1;
        if(x > arr[mid])
            l = mid+1;
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
    res = BinarySearch(arr,n,x);
    cout << res << endl;

    return 0;
}