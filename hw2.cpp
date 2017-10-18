
//Christine Shue - Due Date: February 18, 2016
//HW 2
#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;
void get_data (double&a,double&b,double&c);
int main()
{
    double a,b,c;
    get_data(a,b,c);
    cout<<"a = "<<a<<", b = "<<b<<", c= "<<c<<endl;
    if ((a+b>c)&&(a+c>b)&&(b+c>a))
	cout<<"yes"<<endl;
    else
	cout<<"no"<<endl;
}
void get_data (double&a,double&b,double&c)
{
    cout<<"Enter 3 numbers (a,b,c): ";
    cin>>a>>b>>c;
}
