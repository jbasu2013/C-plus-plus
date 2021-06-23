/* Author : Chaitaly Kundu
   Date : 21 june 2021 */


#include<bits/stdc++.h>
using namespace std;

void SelectionSort(int arr[], int n)
{
    for(int i=0;i<n-1;i++)
    {
        int min = i;
        for(int j=i+1;j<n;j++)
        {
            if(arr[min] > arr[j])
            {
                min = j;
            }
        }
        if(min!=i)
            swap(arr[i], arr[min]);
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

    SelectionSort(arr,n);

    for(i=0;i<n;i++)
        cout << arr[i] << " ";

    return 0;
}