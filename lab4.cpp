
//Christine Shue - February 17, 2016
//Lab 4

#include<iostream>
#include<iomanip>
#include<cmath>

void input(double&a,double&b,double&c);
void swap(double&a,double&b);

using namespace std;

int main()
{
    double a,b,c;
    input(a,b,c);
    cout<<"a= "<<a<<endl<<"b= "<<b<<endl<<"c= "<<c<<endl;
    
}
void input(double&a,double&b,double&c)
{
    cout<<"Enter 3 numbers (a,b,c): ";
    cin>>a>>b>>c;
    if (a>b)
	swap(a,b);
    if (b>c)
	swap(b,c);
    if(b<a)
	swap(a,b);
}
void swap(double&a,double&b)
{
    double temp;
    temp=a;
    a=b;
    b=temp;
}
