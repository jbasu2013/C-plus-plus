// else if statement

#include<iostream>
using namespace std;

int main()
{
    int a=5, b=6, c=7;
    if(a>b && a>c)
    {
        cout << "a is greater." << endl;
    }
    else if(b>a && b>c)
    {
        cout << "b is greater" << endl;
    }
    else
        cout << "c is greater" << endl;
}
