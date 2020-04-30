#include<iostream>
using namespace std;

int main()
{
    int m=15,n=25,o=25,p=25,q=25;
    m += 10;    // m = m+10
    n -= 10;    // n = n-10
    o *= 10;    // o = o*10
    p /= 10;    // p = p/10
    q %= 10;     // q = q%10
    cout << "Value of m: " << m << endl;
    cout << "Value of n: " << n << endl;
    cout << "Value of o: " << o << endl;
    cout << "Value of p: " << p << endl;
    cout << "Value of q: " << q << endl;
}


// output: Value of m: 25
//         Value of n: 15
//         Value of o: 250
//         Value of p: 3
 //        Value of q: 5
