// nested if statement ( here if both conditions are true then the statement will execute )

#include<iostream>
using namespace std;
int main()
{
    int a=50, b=16, c=13;
    if(a>b)
    {
        if(b>c)
        {
            cout << "a is greater." << endl;
        }
    }
}
