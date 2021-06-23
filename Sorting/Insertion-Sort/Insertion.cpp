/* Author : Chaitaly Kundu
   Date : 21 june 2021 */


#include<bits/stdc++.h>
using namespace std;

void InsertionSort(int arr[], int n)
{
    int i, j, current;
    for(i=1;i<n;i++)
    {
        current=arr[i];
        for( j=i-1;j>=0;j--)
        {
            if(arr[j] > current)
            {
                arr[j+1]=arr[j];
            }
            else
                break;
        }
        arr[j+1]=current;
    }
}

int main(){
    int n;

    cout << "Enter the number of elements : ";
    cin >> n;


    int arr[n], i;
    cout << "Array elements are : ";
    for(i=0;i<n;i++)
        cin >> arr[i];

    InsertionSort(arr,n);

    for(i=0;i<n;i++)
        cout << arr[i] << " ";

    return 0;
}