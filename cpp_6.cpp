// logical operators: and(&&),  or(||), not(!)

#include<iostream>
using namespace std;
int main()
{
    int a=5, b=2, c=3, d=5, and_result, or_result, not_result;
    and_result= (a<b && c<d);
    or_result= (a>b || c>d);
    not_result= !(a<b);
    cout << "and operation result is " << and_result << endl;
    cout << "or operation result is " << or_result << endl;
    cout << "not operation result is " << not_result << endl;
}
