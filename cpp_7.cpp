// precedence of operators
// operations will be left to right
// precedence is: * = / < + = -


#include<iostream>
using namespace std;

int main()
{
    int a=20, b=30, c=50, d=25,result;
    result= a+b*c/d-b;
    cout << "Result is: " << result << endl;
    return 0;
}
