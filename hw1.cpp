
//Christine Shue - Due February 11, 2016
//HW 1
#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;
int main()
{
    double a,b,c,d;
    cout<<"Enter 3 numbers (a,b,c): ";
    cin>>a>>b>>c;
    d=(sqrt((log(a)-log(b))/(a-b)))*(cbrt((log10(a)-log10(b))/(a*b)))-sqrt(sin(a*c));
    cout<<"Value= "<<setprecision(8)<<d<<endl;
    cout<<"Value= "<<setiosflags(ios::scientific)<<d<<endl;
    return 0;
}
