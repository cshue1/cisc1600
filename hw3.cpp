//Christine Shue - Due: February 22, 2016
//HW 3

#include<iostream>
#include<iomanip>
#include<cmath>

using namespace std;

void get_coefficients(double&a,double&b,double&c);
double sign(double b);
double discriminant (double a,double b,double c);

int main()
{
    double a,b,c,root1,root2;
    get_coefficients(a,b,c);
    cout<<"a = "<<a<<", b = "<<b<<", c = "<<c<<endl;
    if((discriminant(a,b,c)<0)||(a==0))
	cout<<"ERROR: no real roots"<<endl;
    else
    {   
	if (b*b>20*4*a*c)
	{
	    root1=(-b-sign(b)*sqrt(discriminant(a,b,c)))/(2*a);
	    root2=c/(a*root1);
	}
	else
        {
	    root1=(-b-sqrt(discriminant(a,b,c)))/(2*a);
	    root2=(-b+sqrt(discriminant(a,b,c)))/(2*a);
	}
	cout<<setiosflags(ios::fixed)<<setprecision(5)<<setw(8)<<endl;
        cout<<"Root 1= "<<root1<<endl<<"Root 2= "<<root2<<endl;
    }
	
}
void get_coefficients(double&a,double&b,double&c)
{
    cout<<"Enter 3 numbers which are the coefficients for the quadratic equation (a,b,c): ";
    cin>>a>>b>>c;
}
double sign(double b)
{
    if(b>=0)
	b=1;
    else
	b=-1;
    return b;
}
double discriminant (double a,double b,double c)
{
    double discriminant;
    discriminant=b*b-4*a*c;
    return discriminant;
}
