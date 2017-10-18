
//Christine Shue March 30, 2016
//Quiz 2

#include<iostream>
#include<iomanip>
#include<cmath>

double function_1 (double x);
double function_2 (double x);

using namespace std;

int main()
{
    double x,y;
    cout<<fixed<<showpoint<<setprecision(2);
    cout<<"x\t\ty"<<endl<<endl;
    for (int i = -50; i < 22; i+=2)
    {
	x = double(i)/10;
	if (x < -1.8)
	    y = function_1 (x);
	else
	    y = function_2 (x);
	cout<<setw(5)<<x<<setw(15)<<y<<endl;
    }
}

double function_1 (double x)
{
    return (1-((x+3)*(x+3)));
}

double function_2 (double x)
{
    return (-(x*x)+4);
}
