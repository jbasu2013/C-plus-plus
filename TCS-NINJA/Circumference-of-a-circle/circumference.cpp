/* Author : Chaitaly Kundu
   Date : 02-09-2021*/

#include<iostream>
#include<iomanip>

using namespace std;

float circumference_of_a_circle( float r)
{
    float circumference = 2 * 3.14 * r;
    return circumference;
}

int main(){

    float r;
    cin >> r;

    float circumference = circumference_of_a_circle(r);
    cout << fixed << setprecision(2) << circumference << endl;
    return 0;
}