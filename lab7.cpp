//Christine Shue - March 16, 2016
//Lab 7

#include<iostream>
#include<iomanip>
#include<cmath>

const int MAX = 10;
using namespace std;

int main()
{
    for(int a=1; a < MAX; ++a)
	for (int b=a+1; b < MAX; ++b)
	    for (int c=a+1; c < MAX; ++c)
		for (int d=c+1; d < MAX; ++d)
		    if (a*a + b*b == c*c + d*d)
		    {
		        cout<<"a = "<<a<<endl;
                        cout<<"b = "<<b<<endl;
                        cout<<"c = "<<c<<endl;
                        cout<<"d = "<<d<<endl;
                        cout<<"n = "<<a*a + b*b<<endl;
			return 0;
		    }
    
}

