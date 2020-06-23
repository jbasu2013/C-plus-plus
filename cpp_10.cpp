// sizeof operator

#include<iostream>
using namespace std;

main()
{
    cout << sizeof(int) << "\n";
    cout << sizeof(char) << "\n";
    cout << sizeof(float) << "\n";
    cout << sizeof(double) << "\n";


    // the result of the sum of the sizeof 2 datatype is the greater one
    int a=2;
    double b=3.6;
    cout << sizeof(a + b) << "\n";

}
