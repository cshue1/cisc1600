
//Christine Shue - February 10, 2016
//Lab 3
#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;
double get_data(double&a,double&b,double&c);
double triangle_area(double a,double b, double c);
int main()
{
    double a,b,c;
    get_data(a,b,c);
    cout<<"a= "<<a<<" b= "<<b<<" c= "<<c<<endl;
    cout<<triangle_area(a,b,c)<<endl;
}
double get_data(double&a,double&b,double&c)
{
    cout<<"Enter 3 numbers (a,b,c): ";
    cin>>a>>b>>c;
}    
double triangle_area(double a,double b,double c)
{
    double s;
    s=(a+b+c)/2;
    cout<<"area = ";
    return sqrt(s*(s-a)*(s-b)*(s-c));
}
