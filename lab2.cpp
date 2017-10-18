
//Christine Shue - February 3, 2016
//Lab 2
#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;
int main()
{
    double a,b,c,x,y;
    cout<<setprecision(7);
    cout<<"enter 4 numbers: ";
    cin>>a>>b>>c>>x;
    y= abs(((log10(a)/log(3))-sin(b))/(a*b))-pow((pow(x,c)-exp(2*a)),(0.03*c));
    cout<<"y = "<<y<<endl;
    return 0;
}
