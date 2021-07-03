#include<iostream>
using namespace std;

int main(){

    int a[] = {11,22,33,44,55};
    int n = sizeof(a)/sizeof(a[0]);

    int* p = a;

    // Value
    for(int i=0;i<n;i++)
    {
        cout << "Address of a[" << i << "] is " << *p++ << endl;
    }


    // Address
    for(int i=0;i<n;i++)
    {
        cout << "Address of a[" << i << "] is " << p++ << endl;
    }


    return 0;
}