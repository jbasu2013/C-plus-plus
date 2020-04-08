//increment and decrement operator
// ++a means a will be incremented by 1, then use the new value of a.
//a++ means use the value of a , then increment by 1
// --b means b will be decremented by 1, then use the new value of b.
//b-- means use the value of b , then decrement by 1

#include<iostream>
using namespace std;

int main()
{
    int a=3;
    cout << "pre-increment result is: " << ++a << endl;
    cout << "new value result is: " << a << endl;
    cout << "post-increment result is: " << a++ << endl;
    cout << "new value result is: " << a << endl;
    cout << "pre-decrement result is: " << --a << endl;
    cout << "new value result is: " << a << endl;
    cout << "post-decrement result is: " << a-- << endl;
    cout << "new value result is: " << a << endl;
}
