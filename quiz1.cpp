
//Christine Shue - February 24, 2016
//Quiz 1

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

void get_numbers(double&a,double&b,double&c);
double order(double a,double b, double c);
    
int main()
{
    double a,b,c;
    get_numbers(a,b,c);
    cout<<"a = "<<a<<" b= "<<b<<" c= "<<c<<endl;
    cout<<"The smallest number is: "<<order(a,b,c)<<endl;
}

void get_numbers(double&a,double&b,double&c)
{
    cout<<"Enter 3 numbers (a,b,c): ";
    cin>>a>>b>>c;
}
double order(double a, double b, double c)
{
    if ((a < b) && (a < c))
	return a;
    if ((b < a) && (b < c))
	return b;
    if ((c < b) && (c < a))
	return c;
}

