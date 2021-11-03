#include<iostream>
#include<cmath>

using namespace std;

int binary_to_decimal(int B)
{
    int i=0, num=0, d ;
    while(B>0)
    {
        d = B % 10;
        num = num + (d * pow(2,i++));
        B = B/10;
    }
    return num;
}


int decimal_to_binary(int n)
{
    int i=0, bin_digit, num=0;
    while(n>0){
        bin_digit = n%2;
        num = num + (bin_digit * pow(10,i));
        n = n/2;
        i++;
    }
    return num;
}

int main(){
    float a,b,PI;
    int c;
    cout<<endl;

    cout<<"                Calculator              \n";
    cout<<"----------------------------------------------------------------------------------\n";
    cout<<"Basic Operations  "<<"\tScientific Operations"<<"\t\tConversion\n";
    cout<<"----------------------------------------------------------------------------------\n";
    cout<<"1: Addition\t\t"<<"5: Square root\t\t"<<"\t9: Binary to Decimal"<<endl;
    cout<<"2: Subtraction\t\t"<<"6: Cube root\t\t"<<"\t10: Decimal to binary"<<endl;
    cout<<"3: Multiplication\t"<<"7: Mod\t\t"<<endl;
    cout<<"4: Division\t\t"<<"8: Exponent"<<endl;


    cout<<"\nEnter the function that you to be performed : ";
    cin>>c;
    PI=3.14;

    switch(c)
    {
        case 1:
            cout<<"Enter 1st number : ";
            cin>>a;
            cout<<"Enter 2nd number : ";
            cin>>b;
            cout<<"Addition = "<<a+b<<endl;
            break;
        case 2:
            cout<<"Enter 1st number : ";
            cin>>a;
            cout<<"Enter 2nd number : ";
            cin>>b;
            cout<<"Subtraction = "<<a-b<<endl;
            break;
        case 3:
            cout<<"Enter 1st number : ";
            cin>>a;
            cout<<"Enter 2nd number : ";
            cin>>b;
            cout<<"Multiplication = "<<a*b<<endl;
            break;
        case 4:
            cout<<"Enter 1st number : ";
            cin>>a;
            cout<<"Enter 2nd number : ";
            cin>>b;
            cout<<"Division = "<<a/b<<endl;
            break;
        case 5:
            cout<<"Enter the number : ";
            cin>>a;
            cout<<"Square Root = "<<sqrt(a)<<endl;
            break;
        case 6:
            cout<<"Enter the number : ";
            cin>>a;
            cout<<"Cube Root = "<<cbrt(a)<<endl;
            break;
        case 7:
            int i,j;
            cout<<"Enter 1st number : ";
            cin>>i;
            cout<<"Enter 2nd number : ";
            cin>>j;
            cout<<"Modulus = "<<i%j<<endl;
            break;
        case 8:
            cout<<"Enter the number : ";
            cin>>a;
            cout<<"Enter the exponent : ";
            cin>>b;
            cout<<"Exponent = "<<pow(a,b)<<endl;
            break;
        case 9:
            int m;
            cout<<"Enter the binary number : ";
            cin>>m;
            cout << binary_to_decimal(m)  << endl;
            break;
        case 10:
            int p;
            cout << "Enter a decimal number: ";
            cin >> p;
            cout << "Binary = " << decimal_to_binary(p) << endl;
            break;
        default:
            cout<<"Wrong Input"<<endl;
    }
}